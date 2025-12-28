
#include <Wire.h>
#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 dac;



void setup() {
  // put your setup code here, to run once:
  

  Serial.begin(115200);
  delay(100);  // Small delay to ensure Serial is ready.
  dac.begin(0x60);
  Serial.println("MCP4725 Test");
  if (dac.begin(0x60))        //could be 0x60 or 0x62
  {
    Serial.println("MCP4725 Initialized Successfully.");
  }
  else
  {
    Serial.println("Failed to Initialize MCP4725.");
  }
Serial.println("done setup");
}

void loop() {
  int analogPin = A3;
  int intensity = 0;
  // put your main code here, to run repeatedly:
/*
  dac.setVoltage((1 * 4095) / 5, false);    //Set voltage to 1V
  delay(2000);
  dac.setVoltage((2 * 4095) / 5, false);    //Set voltage to 2V
  delay(2000);
  dac.setVoltage((3 * 4095) / 5, false);    //Set voltage to 3V
  delay(2000);
  dac.setVoltage((4 * 4095) / 5, false);    //Set voltage to 4V
  delay(2000);
  dac.setVoltage(4095, false);              //Set voltage to 5V or (Vcc)
  delay(2000);
*/

  int begin = 1800;
  int end = 3000; // 4095;
  for(int i = begin; i < end; i+=5)
  {
      dac.setVoltage(i, false);
      delay(1);
      intensity = analogRead(analogPin);
    // Serial.print(high_value);
    Serial.print(intensity);
    Serial.print("\n");
  }
  delay(1000);
  for(int i = end; i > begin; i-=5)
  {
      dac.setVoltage(i, false);
      delay(1);
      intensity = analogRead(analogPin);
    // Serial.print(high_value);
    Serial.print(intensity);
    Serial.print("\n");
  }
    delay(1000);



}
