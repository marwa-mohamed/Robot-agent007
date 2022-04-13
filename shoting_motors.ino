void setup() {
  // put your setup code here, to run once:
  //First motor : 
pinMode(3,OUTPUT); // direction 1 second motor 
pinMode(4,OUTPUT); // direction 2 
pinMode(5,OUTPUT); // SPEED 2 
 
  //Second Motor : 
pinMode(8,OUTPUT);//direction 1
pinMode(9,OUTPUT);//direction 2
pinMode(10,OUTPUT);// speed first motor 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
analogWrite(5,255);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
analogWrite(10,255);

}
