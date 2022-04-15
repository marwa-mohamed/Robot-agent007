// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //

#define echor A0 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigr 7 //attach pin D3 Arduino to pin Trig of HC-SR04

#define echof A1 
#define trigf 13 

// defines variables
long durationr, durationf;
int distancer, distancef; 

void setup() {
  pinMode(trigr, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echor, INPUT); // Sets the echoPin as an INPUT

  pinMode(trigf, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echof, INPUT); // Sets the echoPin as an INPUT
  
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");

  //left
  pinMode(2,OUTPUT); // direction 1 second motor 
  pinMode(3,OUTPUT); // direction 2 
  pinMode(5,OUTPUT); // SPEED 2 

  //Right
  pinMode(8,OUTPUT); // direction 1 second motor 
  pinMode(9,OUTPUT); // direction 2 
  pinMode(10,OUTPUT); // SPEED 2 
  }
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigr, LOW);
  delayMicroseconds(2);
  digitalWrite(trigr, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigr, LOW);
  durationr = pulseIn(echor, HIGH);
  distancer = durationr * 0.034 / 2;

  /* --------------- */

  // Clears the trigPin condition
  digitalWrite(trigf, LOW);
  delayMicroseconds(2);
  digitalWrite(trigf, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigf, LOW);
  durationf = pulseIn(echof, HIGH);
  
  // Calculating the distance
  distancef = durationf * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)

  //motion of maze
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(5,255); 

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,255); 
    
  if (distancef <= 20 ) {
    if (distancer <= 20) // turn left
    {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(5,255); 
    
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    analogWrite(9,255); 
    
    }
    else //turn right
    {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    analogWrite(5,255); 

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,255); 
    }
  }
  else
  {
    if (distancer > 20)
    {

    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);    
    
    delay(3000);
    
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);

    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    delay(3000);
    }
  }
}
