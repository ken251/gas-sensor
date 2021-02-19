// Digital pin 8 will be called 'pin8'
int pin8 = 8;
int pin9 = 9;
// Analog pin 0 will be called 'sensor'
int sensor = A0;
// Set the initial sensorValue to 0
int sensorValue = 0;

// The setup routine runs once when you press reset
void setup() {
  // Initialize the digital pin 8 as an output
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

// The loop routine runs over and over again forever
void loop() {
  // Read the input on analog pin 0 (named 'sensor')
  sensorValue = analogRead(sensor);
  // Print out the value you read
  Serial.println(sensorValue, DEC);
  if (sensorValue > 100) {
    // Activate digital output pin 8 - the LED will light up
    //digitalWrite(pin8, HIGH);
    digitalWrite(pin8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(pin8, LOW);    // turn the LED off by making the voltage LOW
  delay(300);  
  if(sensorValue > 118)
 {
 // delay(10000);
  digitalWrite(pin9,HIGH);//beep goes in after 10sec
  delay(300);
  digitalWrite(pin9,LOW);//beep goes on and off
 }
  }
  else {
    // Deactivate digital output pin 8 - the LED will not light up
    digitalWrite(pin8, LOW);
  }

}
