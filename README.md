# ESP32 with CO2 sensor MH-Z19C

I made this firmware based on these repositories:
1. https://github.com/takashi-makinose/MHZ19C
2. https://github.com/crisap94/MHZ19

There are some bugs, which contradict ESP32 because doesn't have a software serial. So in this repository, I made it as HardwareSerial and some of it uses struct to contain the values.
You don't have to download any libraries to make it run, because I put the drivers inside the src folder. 

# Credits and License
License MIT

# How to use
I tried the libraries with ESP32-DEVKIT V1

    MH-Z19 VCC to ESP32 5V
    MH-Z19 GND  to GND  
    MH-Z19 Tx   to RX2 
    MH-Z19 Rx   to TX2
    other MH-Z19 pins are not used.  

Read the main file. You can see the RX TX pins

# Datasheet
* MH-Z19C Data sheet  
  https://www.winsen-sensor.com/d/files/infrared-gas-sensor/mh-z19c-pins-type-co2-manual-ver1_0.pdf
