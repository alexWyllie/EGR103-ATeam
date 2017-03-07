/*
 Analog input, serial output

 Reads an analog input pin and prints the results to the serial monitor.

 The circuit:
 * Analog sensor connected to analog pin 0.

 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Naming the Analog pin the sensor is connected to 
int sensorValue = 0;        // Providing a name for value of the sensor reading
const int output1Pin = 2; //Provides output to control arduino - 1 for steel, 0 for aluminium or other
const int output2Pin = 4; //Provides output to control arduino - 1 for other, 0 for aluminium or steel

void setup() {
  pinMode(5, OUTPUT);    // LED starts off.
    Serial.begin(9600);  // initialize serial communications at 9600 bps:
}

void loop() {   // read the analog in value:
  sensorValue = analogRead(analogInPin);  // Recieve the value of the sensor
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(500);
}
