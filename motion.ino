int flag;
int connecte; 
void setup() 
{   
Serial.begin(9600); 
//left
pinMode(2,OUTPUT); // direction 1 second motor 
pinMode(3,OUTPUT); // direction 2 
pinMode(5,OUTPUT); // SPEED 2 

//Right
pinMode(8,OUTPUT); // direction 1 second motor 
pinMode(9,OUTPUT); // direction 2 
pinMode(10,OUTPUT); // SPEED 2 

} 
void loop() 
{ 
  
  connecte = Serial.available();
 //for up flag = w or 0
  if (connecte > 0) {
    flag = Serial.read(); 
    
    if (flag == 119)
    { 
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(5,126); 

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,126); 
    }

  //for down flag = s or 0
  
    else if (flag == 115) 
    { 
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    analogWrite(5,126); 

    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    analogWrite(10,126); 
    } 

  //for left flag = a or 0
  
  else if (flag == 97) 
  { 
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(5,126); 
    
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    analogWrite(9,126); 
  } 

  //for right flag = d or 0
  
  else if (flag == 100) 
  { 
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    analogWrite(5,126); 

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,126); 
  } 

  //for up-left = q
  
    else if (flag == 113) 
  { 
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(5,126); 

    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    //analogWrite(10,126); 
  } 
  
 // for up-right = e
 
    else if (flag == 101) 
  { 
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    //analogWrite(5,126); 

    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,126); 
  } 
  
  else if (flag == 48) 
  { 
    digitalWrite(2,LOW);
    digitalWrite(3,LOW); 
   // analogWrite(5,255);

    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    // analogWrite(10,255);
  }
  }
}
