int flag; 
void setup() 
{   
Serial.begin(9600); 
//up-right
pinMode(3,OUTPUT); // direction 1 second motor 
pinMode(4,OUTPUT); // direction 2 
pinMode(5,OUTPUT); // SPEED 2 

//up-left
pinMode(7,OUTPUT); // direction 1 second motor 
pinMode(8,OUTPUT); // direction 2 
pinMode(9,OUTPUT); // SPEED 2 

//down-right
pinMode(13,OUTPUT); // direction 1 second motor 
pinMode(12,OUTPUT); // direction 2 
pinMode(10,OUTPUT); // SPEED 2 

//down-left
pinMode(A0,OUTPUT); // direction 1 second motor 
pinMode(A1,OUTPUT); // direction 2 
pinMode(11,OUTPUT); // SPEED 2 

} 
void loop() 
{ 
  flag = Serial.read(); 
  
 //for up flag = w or 0
  if (Serial.available() > 0) {
    if (flag == 119){ 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,70); 

    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(5,70); 

    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    analogWrite(5,70); 

    analogWrite(A0,255);
    analogWrite(A1,0);
    analogWrite(5,70); }

  //for down flag = s or 0
  
    else if (flag == 115) 
    { 
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    analogWrite(5,70); 

    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    analogWrite(5,70); 

    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    analogWrite(5,70); 

    analogWrite(A0,0);
    analogWrite(A1,255);
    analogWrite(5,70); 
    } 

  //for left flag = a or 0
  
  else if (flag == 97) 
  { 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,30); 

    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(5,70); 

    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    analogWrite(5,70); 

    analogWrite(A0,255);
    analogWrite(A1,0);
    analogWrite(5,70); 
  } 

  //for right flag = d or 0
  
  else if (flag == 100) 
  { 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,70); 

    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(5,30); 

    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    analogWrite(5,70); 

    analogWrite(A0,255);
    analogWrite(A1,0);
    analogWrite(5,70); 
  } 
  
  else if (flag == 48) 
  { 
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    
    analogWrite(A0,0);
    analogWrite(A1,0);

  }
}
}
