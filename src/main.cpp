/*
  Author: Efraim Manurung

  I made combinations of few repositories to made this fimrware work on ESP32.

  28th March 2024
*/

#include <Arduino.h>
#include <drivers/MHZ19_uart.h>

const int rx_pin = 16; //Serial rx pin no
const int tx_pin = 17; //Serial tx pin no

MHZ19_uart mhz19;

void setup()
{
  Serial.begin(9600);
  mhz19.begin(rx_pin, tx_pin);
  mhz19.setAutoCalibration(false);

  Serial.println("MH-Z19 is warming up now.");

  // Sometimes it takes longer
  delay(10 * 1000); 
}

void loop()
{
  measurement_t m = mhz19.readSerialData();
  Serial.print("co2: ");
  Serial.println(m.co2_ppm);
  Serial.print("temp: ");
  Serial.println(m.temperature);

  delay(5000);
}
