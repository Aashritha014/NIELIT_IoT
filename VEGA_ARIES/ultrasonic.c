/* PIN CONNECTIONS 

VCC of the sensor to  +5V of the board 

TRIG of the sensor to  GPIO-0 of the board

ECHO of the sensor to  GPIO-1 of the board

GND of the sensor to GND of the board

*/

#define echoPin 1 // attach pin GPIO-1 Aries to pin Echo of HC-SR04
#define trigin 0  //attach pin GPIO-0 Aries to pin Trig of HC-SR04


// defines variables

long duration;  // variable for the duration of sound wave travel 
int distance;  // variable for the distance measurement
void setup () (
pinMode (trigPin, OUTPUT); // Sets the trigin as an OUTPUT 
pinMode (echoPin, INPUT); // Sets the echoPin as an INPUT

Serial.begin (115200); // Serial Communication is starting with 115200 bps speed

Serial.println ("Ultrasonic Sensor HC-SR04 Test"):  // print some text in Serial Monitor 
Serial.println ("with Aries V2.0");
}

void loop () {
  // Clears the trigPin condition
  digitalWrite (trigPin, LOW);
  delayMicroseconds (2);
  
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn (echoPin, HIGH);
  
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  
  // Prints the distance on the Serial Monitor
  Serial.print ("Distance: ");
  Serial.print (distance);
  Serial.println (" cm");
  
  delay (1000); // Wait for a second before next measurement
}


