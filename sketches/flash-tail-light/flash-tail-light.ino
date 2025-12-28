

// Define the digital pin the LED is connected to
const int ledPin = 9;
int analogPin = A3;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);

  // for development purposes only
  // Serial.begin(9600);
  Serial.begin(115200);
}

void loop() {
  /*
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // Wait for one second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // Wait for one second
  delay(1000);
*/

  int delay_count = 50;
  int delay_time = 20;

  int high_value = 1;
  int low_value = 0;
  int intensity = 0;
   
  int brightness = 255;
  //digitalWrite(ledPin, HIGH);
  for(int i = 0; i < delay_count; i++) 
  {
    // brightness += 5;
    analogWrite(ledPin, brightness);
    intensity = analogRead(analogPin);
    // Serial.print(high_value);
    Serial.print(intensity);
    Serial.print("\n");
    delay(delay_time);
  }
  //digitalWrite(ledPin, LOW);
  brightness = 0;
  for(int i = 0; i < delay_count; i++) 
  {
    // brightness -= 5;
    analogWrite(ledPin, brightness);
    intensity = analogRead(analogPin);
    Serial.print("Variable_1:");
    // Serial.print(low_value);
    Serial.print(intensity);
    Serial.print("\n");
    delay(delay_time);
  }


}




