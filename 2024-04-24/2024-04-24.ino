#include <Servo.h>
Servo myservo;
Servo myservo2;
int pos=0;
int pos1 = 90;
int pos2 = 0;
int count = 0;
int servoPin=9;
int servoPin1=10;


int c1 = A0;
int c2 = A1;
int c3 = A2;

int led1 = 1; 
int led2 = 2; 
int led3 = 3; 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(servoPin,OUTPUT);
  pinMode(servoPin1,OUTPUT);
  myservo.attach(servoPin);
  myservo2.attach(servoPin1);
}
 
void loop() {
  int cdsVal1 = analogRead(c1);
  int cdsVal2 = analogRead(c2);
  int cdsVal3 = analogRead(c3);

 
  // Serial.print("c3 =  ");
  // Serial.println(cdsVal3);

  if (cdsVal1 > 220) {    
    digitalWrite(led1, HIGH);     
  } 
  else {    
    digitalWrite(led1, LOW);      
  }

  if (cdsVal2 > 220) {    
    digitalWrite(led2, HIGH);     
  } 
  else {    
    digitalWrite(led2, LOW);      
  }

  if (cdsVal3 > 220) {    
    digitalWrite(led3, HIGH);

  } 
  else {    
    digitalWrite(led3, LOW);      
  }

  if (digitalRead(led1)==HIGH && digitalRead(led2)==HIGH && digitalRead(led3)==HIGH )
  {
    if (count == 0){
      myservo2.write(pos1);
      count = 1;
    }
    delay(2);
    for (pos = 90; pos <=180; pos+=1)
    {
      myservo.write(pos);
    }
  }
  else if(digitalRead(led1)==LOW && digitalRead(led2)==LOW && digitalRead(led3)==LOW )
  {
    if (count == 1){
      myservo2.write(pos2);
      count = 0;
    }
  }
  

}


// //서브 모터
// #include <Servo.h>
// Servo myservo;
// int pos=0;
// int servoPin=10;
// void setup() {
//   // put your setup code here, to run once:
//   pinMode(servoPin,OUTPUT);
//   myservo.attach(10);

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   for (pos = 0; pos <=270; pos+=1)
//   {
//     myservo.write(pos);
//     delay(1);
//   }
//   for (pos = 270; pos >= 0; pos -= 1)
//   {
//     myservo.write(pos);
//     delay(1);
//   }
// }