#include <SoftwareSerial.h>

#define FRONT_PIN 10
#define MID_PIN 9
#define REAR_PIN 6
#define NUMBER_OF_PINS 3
int pins[NUMBER_OF_PINS] = {REAR_PIN, MID_PIN, FRONT_PIN};

#define PWM_INTENSITY 255
#define PIN_OFF 0
#define PULSE_DURATION 1000
#define INTER_STIMULUS_INTERVAL 500
#define RHYTHM_REPETITIONS 1
#define RHYTHM_DELAY 1000

#define INPUT_SIZE 64

SoftwareSerial hc06 (2,3);


void vibrate(int pin, int intensity) {
  analogWrite(pin, intensity);
  
}

/**
 * @brief Only a singular specified tactor is activated for a set duration and intensity.
 * @param pin - the pin to be activated
 */
void singleBuzz(int pin, int intensity, int pulseDuration, int repetitions, int rhythmDelay) {
  for (int i=0; i<repetitions; i++) {
    vibrate(pin, intensity);
    delay(pulseDuration);
    vibrate(pin, PIN_OFF);
    delay((i+1 < repetitions) ? rhythmDelay : 0);   // dont delay on last repetition
  }
}

void wallBuzz(int pin, int intensity, int pulseDuration, int repetitions, int rhythmDelay) {
  int index = findPinIndex(pin);
  for (int i=0; i<repetitions; i++) {
    for (int i=0; i < index+1; i++) {
      vibrate(pins[i], intensity);
    }
    delay(pulseDuration);
    for (int i=0; i < index+1; i++) {
      vibrate(pins[i], PIN_OFF);
    }
    delay((i+1 < repetitions) ? rhythmDelay : 0);   // dont delay on last repetition
  }
}


void waveBuzz(int pin, int intensity, int pulseDuration, int isi, int repetitions, int rhythmDelay) {
  for (int i=0; i<repetitions; i++) {
    switch(pin) {
      case REAR_PIN:
        vibrate(REAR_PIN, intensity);
        delay(pulseDuration);
        vibrate(REAR_PIN, PIN_OFF);
        break;
      case MID_PIN:
        vibrate(REAR_PIN, intensity);
        delay(isi);
        vibrate(MID_PIN, intensity);
        delay(isi);
        vibrate(REAR_PIN, PIN_OFF);
        delay(isi);
        vibrate(MID_PIN, PIN_OFF);
        break;
      case FRONT_PIN:
        vibrate(REAR_PIN, intensity);
        delay(isi);
        vibrate(MID_PIN, intensity);
        delay(isi);
        vibrate(REAR_PIN, PIN_OFF);
        vibrate(FRONT_PIN, intensity);
        delay(isi);
        vibrate(MID_PIN, PIN_OFF);
        delay(isi);
        vibrate(FRONT_PIN, PIN_OFF);
        break;
    }
    delay((i+1 < repetitions) ? rhythmDelay : 0);   // dont delay on last repetition
  }
}

int findPinIndex(int pin) {
  for (int i = 0; i < NUMBER_OF_PINS; i++) {
    if (pins[i] == pin) {
      return i;
    }
  }
  return -1;
}


char* readAndAllocateMemory(Stream& source) {
  char input[INPUT_SIZE + 1];
  byte size = source.readBytesUntil('\n', input, INPUT_SIZE);
  // Add the final 0 to end the C string
  input[size] = '\0';
  // Copy and return contents of input to dynamically allocated memory
  char* copiedInput = new char[size + 1];
  strcpy(copiedInput, input);
  return copiedInput;
}

char* readCommand() {
  if (hc06.available()) {
    return readAndAllocateMemory(hc06);
  }
  if (Serial.available()) {
    return readAndAllocateMemory(Serial);
  }
  return nullptr;
}

int getPin(char* pinName) {
  if (strcmp(pinName, "FRONT") == 0) {
    return FRONT_PIN;
  } else if (strcmp(pinName, "MID") == 0) {
    return MID_PIN;
  } else if (strcmp(pinName, "REAR") == 0) {
    return REAR_PIN;
  } else {
    return -1;
  }
}

int validateParameter(int parameter, char* paramName, int minValue, int maxValue, char* value) {
  int p = atoi(value + 1);
  Serial.println(p);
  if (p == NULL || p < minValue || p > maxValue) {
    Serial.print("Invalid ");
    Serial.print(paramName);
    Serial.print(" range (");
    Serial.print(minValue);
    Serial.print("-");
    Serial.print(maxValue);
    Serial.println(")");
    Serial.println("Using default value");
    return parameter;
  }
  return p;
}



void processCommand(int input) {
  // Get main command
  char* command = strtok(input, ":");
  char* parameters = strtok(NULL, ":");
  if (command == NULL || parameters == NULL) return;

  // Get the pin name and which pin that relates to
  char* pinName = strtok(parameters, ",");
  int pin = getPin(pinName);
  if (pin == -1) return;

  // Get any optional parameters
  int intensity = PWM_INTENSITY;
  int pulseDuration = PULSE_DURATION;
  int isi = INTER_STIMULUS_INTERVAL;
  int repetitions = RHYTHM_REPETITIONS;
  int rhythmDelay = RHYTHM_DELAY;
  char* optionalParameters = strtok(NULL, ",");
  while (optionalParameters != NULL) {
    switch(optionalParameters[0]) {
      case 'I':
        intensity = validateParameter(intensity, "intensity", 0, 255, optionalParameters);
        break;
      case 'D':
        pulseDuration = validateParameter(pulseDuration, "pulse duration", 50, 10000, optionalParameters);
        break;
      case 'S':
        isi = validateParameter(isi, "inter-stimulus interval", 50, 2000, optionalParameters);
        break;
      case 'R':
        repetitions = validateParameter(repetitions, "repetitions", 1, 10, optionalParameters);
        break;
      case 'L':
        rhythmDelay = validateParameter(rhythmDelay, "rhythm delay", 50, 2000, optionalParameters);
        break;
    }
    optionalParameters = strtok(NULL, ",");
  }

  if (strcmp(command, "SINGLE") == 0) {
    singleBuzz(pin, intensity, pulseDuration, repetitions, rhythmDelay);
  } else if (strcmp(command, "WALL") == 0) {
    wallBuzz(pin, intensity, pulseDuration, repetitions, rhythmDelay);
  } else if (strcmp(command, "WAVE") == 0) {
    waveBuzz(pin, intensity, pulseDuration, isi, repetitions, rhythmDelay);
  } else {
    Serial.println("Unknown command");
  }
}


void setup() {
  Serial.begin(9600);           // Initialise serial monitor
 	hc06.begin(9600);             // Initialise hc06 monitor
  pinMode(FRONT_PIN, OUTPUT);   // Front output pin
  pinMode(MID_PIN, OUTPUT);     // Mid output pin
  pinMode(REAR_PIN, OUTPUT);    // Rear output pin
}

void loop() {
  char* input = readCommand();
  if (input != nullptr) {
    processCommand(input);
    // Free the dynamically allocated memory
    delete[] input;
  }
}
