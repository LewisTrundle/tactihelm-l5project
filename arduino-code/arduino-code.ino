#include <SoftwareSerial.h>

SoftwareSerial hc06 (2,3);

int m1 = 5;
int m2 = 6;
int m3 = 9;
int m4 = 10;

// Calculate based on max input size expected for one command
#define INPUT_SIZE 6

void setup(){
 	// init serial monitor
 	hc06.begin(9600);
  // init motors
  pinMode(m1, OUTPUT);
  digitalWrite(m1, LOW);
  pinMode(m2, OUTPUT);
  digitalWrite(m2, LOW);
  pinMode(m3, OUTPUT);
  digitalWrite(m3, LOW);
  pinMode(m4, OUTPUT);
  digitalWrite(m4, LOW);
}

void loop(){
  // Get next command from Serial (add 1 for final 0)
  char input[INPUT_SIZE + 1];
  byte size = hc06.readBytes(input, INPUT_SIZE);
  // Add the final 0 to end the C string
  input[size] = 0;

  // Read each command pair 
  char* m = strtok(input, ",");
  char* v = strtok(NULL, ",");

  if (m != NULL && v != NULL) {
    activateMotors(atoi(m), atoi(v));
  }
}

void activateMotors(int motor, int value) {
  switch(motor) {
    case 1:
      analogWrite(m1, value);
      break;
    case 2:
      analogWrite(m2, value);
      break;
    case 3:
      analogWrite(m3, value);
      break;
    case 4:
      analogWrite(m4, value);
      break;
  }
}


