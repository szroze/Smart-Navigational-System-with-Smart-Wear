# Smart-Navigational-System-with-Smart-Wear

This project is a navigational interactive system with smart wear for the vision impaired.
To utilize the project Android application, the Android version must be 12+.
If the Android in posession is a version lower, one can simply switch the notificationStyle extension to the one that is compatible with the previous versions.

As the MIT APP Inventor itself does not provide a component to generate a push alert, an internet extension is required for such function. For Android versions prior to 12, the below notification style can be employed:
https://github.com/jarlisson2/NotificationStyleAIX

In this project, as the Android hardware was an Android version 13, an updated notification style is utilized as below. For Android veresions 12 or above, the below extension must be utilized:
https://github.com/jarlisson2/NotificationStyleAIX






HOW TO:

Install the Smart Cane Android application on your Android. For Android versions 12+, one must manually provide permissions for the application to function appropriately in the application setting. Click on the application setting, and grant the application all required permissions, especially the permission to connect to other devices. This is crucial since the Android device will be connecting to the smart cane hardware via Bluetooth.

Once all necessary permissions are granted, click on the application and tap on the "Connect Bluetooth" tab. Select the bluetooth module, which, in this case, is the HC-06, and connect the device to the bluetooth module in Arduino. Make sure the bluetooth module is not connected prior to another device.

Once the connection is established, the application will provide vibration and sound alerts when the ultrasonic sensor detects an obstacle. Once the experience is complete, turn off the application to de-connect from the smart cane bluetooth.
