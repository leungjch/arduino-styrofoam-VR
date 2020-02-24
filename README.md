# arduino-styrofoam-VR
<img src="vr_headset_photo.png" width="50%" height="50%">
<img src="vr_gif.gif" width="75%" height="75%">

A prototype DIY VR headset project requiring only Arduino Nano, MPU6050, a phone display, biconvex lenses, and some styrofoam. I adapted the driver code from Valve's OpenVR API: https://github.com/ValveSoftware/openvr

Since dedicated screens are quite expensive, I opted to simply built a headset with a front opening where a phone can be inserted, à la Google Cardboard. To run SteamVR games on it, I ran the Google Remote Desktop app which streamed my desktop to the phone. Admittedly this is a pretty ghetto setup, and the headset suffers from some major calibration drift when I tested it out. I'm just happy that it even worked!

Instructions:
Upload arduino_vrcode.ino to your Arduino. Compile the modified OpenVR driver (driver_sample.cpp) and paste the .dll file into \Steam\steamapps\common\SteamVR\drivers\sample\bin\win32. Steam should then recognize your DIY headset when you connect the Arduino to your computer.
