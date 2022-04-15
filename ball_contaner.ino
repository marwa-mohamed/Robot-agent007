void setup() {
// put your setup code here, to run once:
Serial.begin(9600); 
pinMode(3,OUTPUT); // direction 1 second motor 
pinMode(4,OUTPUT); // direction 2 
pinMode(5,OUTPUT); // SPEED 2 

}

void loop() {
  // put your main code here, to run repeatedly
  int flag;
  int connecte;
  connecte = Serial.available();
  if(connecte > 0){
    flag = Serial.read();
    if (flag == 49)
    {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,63.75);
    }
    else if (flag ==48)
    {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    analogWrite(5,63.75);
    }
  }
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,63.75);
    delay (500);

}
