# User Manual

## Demonstration

### Equipment and Apps

Please check that you have the following equipment before continuing reading this manual:

- TactiHelm helmet (incl. battery and rain-cover)
- Bike radar (incl. bike attachment)
- Conambo Bluetooth Headset
- USB-A to USB-C cable and charger
- USB-A to Micro-USB cable
- Bike phone holder
- Google Pixel 4 Android phone (if applicable)

Additionally, make sure you have the following applications downloaded on your mobile device:

- TactiHelm Controller
- Ride with GPS
- any voice recorder app (Google Record works well)

For any help with downloading these apps, please see [Downloading Apps](#downloading-apps).

If you have been given a temporary mobile device, please make sure the evaluator has given you the pin.

### Before Your Commute

Before each commute, please do the following steps in the order they are described:

1. Firstly, please make sure your bike radar, headset, and mobile device are fully charged.
2. Next make sure the bike phone holder is attached to the handlebars of your bike.
3. Turn on the helmet an put it on your head (see [Turning On/Off the Helmet](#turning-onoff-the-helmet)).
4. Make sure the bike radar is attached to your bike (see [Attaching the Bike Radar](#attaching-the-bike-radar)) and make sure it is turned on (see [Turning On/Off the Bike Radar](#turning-onoff-the-bike-radar)).
5. Turn on the headset (see [Turning On/Off the Headset](#turning-onoff-the-headset)), put it on, and use Bluetooth on your mobile device to connect to it (see [Using the Headset](#using-the-headset)).
6. Once the headset is connected to your mobile device, to start recording audio, open your voice recorder app and press 'Start Recording' (see [Using the Headset](#using-the-headset)).
7. Use the TactiHelm Controller on your mobile device to Bluetooth connect to the helmet and bike radar (see [Connecting to the Helmet and Bike Radar](#connecting-to-the-helmet-and-bike-radar)).
8. Once the previous steps are complete and you are ready to start your commute:
   1. please press 'Start Ride' on the Ride with GPS app to start recording your route (see [Recording Your Route](#recording-your-route)).
   2. please press 'Start Ride' on the TactiHelm Controller app to start receiving vibrations to your helmet (see [Starting a Ride](#starting-a-ride)).
9. You can now put your mobile device in the phone holder and start cycling. Make sure to leave your screen on and on the controller app.

### After Your Commute

Once you have finished your commute, please do the following steps in the order they are described:

1. Firstly, press 'Stop Ride' on the TactiHelm controller app to stop receiving vibrations (see [Starting a Ride](#starting-a-ride)) and disconnect from the helmet and bike radar (see [Connecting to the Helmet and Bike Radar](#connecting-to-the-helmet-and-bike-radar)).
2. Press 'Stop Ride' on the Ride with GPS app, and make sure to save your route (see [Recording Your Route](#recording-your-route)).
3. On your voice recorder app, stop the audio recording (see [Using the Headset](#using-the-headset)) and disconnect and turn off the headset.
4. Turn off the bike radar (see [Turning On/Off the Bike Radar](#turning-onoff-the-bike-radar)) and detach it from your bike (see [Attaching the Bike Radar](#attaching-the-bike-radar)).
5. Remove the helmet from your head and turn it off (see [Turning On/Off the Helmet](#turning-onoff-the-helmet)).
6. Finally, make sure to charge your bike radar, headset, and mobile device before your next commute.

## Downloading Apps

### TactiHelm Controller

The TactiHelm Controller application is how you can connect to the helmet and bike radar and start receiving vibrations. The app is needed to allow the bike radar to communicate with the helmet: when the radar detects a vehicle, it sends this information to the app, the app then sends this information to the helmet.

**Note that this app only works on Android.**

There are two ways to install the app:

- The easiest way is to use the camera on the device you wish to install the app and scan this [QR Code](./controller-download-qr-code.png).
- The other way is to use open the following link on the device you wish to install the app: [Download TactiHelm Controller](https://expo.dev//accounts/lewis.trundle/projects/tactihelm-controller/builds/a7e4de50-f2a2-45e2-8f47-f96d860eac1d).

Press the 'Install' button and press 'Okay' on the notification which appears which warns you the file may be harmful. The installation file will not start installing. Once this file has finished downloading, press on the file to finish installing the app (you may have to adjust your security settings).

### Voice Recorder App

A voice recorder application is required to record your think-aloud evaluation and your post-evaluation interview. There are many viable options, however, for this study we'll be using [Google Recorder](https://recorder.google.com/).

### Ride with GPS

The Ride with GPS application is needed to record your GPS data during your commute. The mobile application can be downloaded on your device using the following link: [Ride with GPS Download](https://play.google.com/store/apps/details?id=com.ridewithgps.mobile&hl=en&gl=US). The web version can be accessed here: [www.ridewithgps.com](https://ridewithgps.com/).

## Attaching Equipment

### Attaching the Bike Radar

The bike radar can be attached to the back of your bike by using the provided attachment as seen in the video.

<img src="radar-attach.gif" alt="Attach Bike Radar" width="100">

### Attaching the Phone Holder

The phone holder can be attached to the handlebars of your bike as seen in the video.

<img src="phone-holder.gif" alt="Attach Phone Holder" width="100">

## Turning On/Off the Equipment

### Turning On/Off the Helmet

To turn on or off the helmet, first you'll need to take off the rain cover. The helmet can then be turned on by connecting the cable connected to the 9V battery to the Arduino DC Barrel Power Jack; the helmet is turned off by removing the connected cable. Please make sure to put the rain cover back on the helmet and tighten it as much as you can.

<img src="helmet.gif" alt="Helmet" width="100">

### Turning On/Off the Bike Radar

To turn on or off the sensor, hold the power button for 3s as seen in the video.

<img src="radar-on.gif" alt="Radar On" width="100">

### Turning On/Off the Headset

The headset can be turned on and off by holding the power button for 3 seconds as seen in the video.

<img src="headpiece.gif" alt="Headset" width="100">

## Using the TactiHelm Controller and Recording your Ride

### Connecting to the Helmet and Bike Radar

To connect to the helmet and bike radar, press the "Connect to Helmet/Sensor" buttons as seen in the video. Your device will then use Bluetooth to search for each device (please note that searching for the helmet may take up to 60 seconds).

Once your device has finished searching, a list of available devices will be produced on your screen. To connect to the bike radar, select the device with the name 'RTL515' and press 'Connect'. To connect to the helmet, select the device with the name 'HC-05' and press 'Connect'. Once connected, you may navigate back to the home screen (please note that connection may take a few seconds).

To disconnect from these devices, simply press the "Disconnect Helmet/Sensor" buttons and press 'Disconnect'.

### Starting a Ride

Once you are ready to start cycling and receiving vibrations from the helmet, select the 'Start Ride' button on the home screen, as seen in the video. To stop receiving vibration, simply press the 'Stop Ride' button.

**Important: the helmet will only receive vibrations while your mobile device is on, unlocked, and on the TactiHelm Controller app.**

### Using the Headset

To connect to the headset, use your mobile device and select the Bluetooth device named 'K18'. Once this is connected, you can start recording audio by navigating to your voice recorder app and selecting 'Record Audio'. Press the same button again to stop recording audio.

### Recording your Route

To record your route data, open the Ride with GPS app and simply press 'Start Ride' to start recording your route. To stop recording, press the 'Stop Ride' button.

<img src="controller-demo.gif" alt="Controller Demo" width="100">
