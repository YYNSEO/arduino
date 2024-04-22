// void setup() {// 설정값
//   // put your setup code here, to run once:
//   pinMode(2,OUTPUT);
//   pinMode(3,OUTPUT);
//   pinMode(4,OUTPUT);



// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   // digitalWrite(4,HIGH);
//   // delay(2500);



//   // digitalWrite(4,LOW);

//   // digitalWrite(3,HIGH);
//   // delay(1700);
//   // digitalWrite(3,LOW);

//   // digitalWrite(2,HIGH);
//   // delay(2200);
//   // digitalWrite(2,LOW);


//   digitalWrite(4,HIGH);
//   delay(1000);
//   digitalWrite(3,HIGH);
//   delay(1000);
//   digitalWrite(2,HIGH);
//   delay(1000);
//   digitalWrite(2,LOW);
//   delay(1000);
//   digitalWrite(3,LOW);
//   delay(1000);
//   digitalWrite(4,LOW);
//   delay(1000);


//   // digitalWrite(2,LOW);
//   // digitalWrite(3,LOW);
//   // digitalWrite(4,LOW);
//   // delay(1000);
  
// }

// int s1=12;
// int s2=11;
// int s3=10;

// int led1=4;
// int led2=3;
// int led3=2;
// int flags = 0;
// void setup(){
//   pinMode(led1,OUTPUT);
//   pinMode(led2,OUTPUT);
//   pinMode(led3,OUTPUT);
//   pinMode(s1,INPUT_PULLUP);
//   pinMode(s2,INPUT_PULLUP);

// }

// void loop(){
//   if(digitalRead(s1)==LOW)
//   {
//     int flags = 1;
//     while(flags == 1){
//     digitalWrite(led1, LOW);
//     digitalWrite(led3, LOW);
//     digitalWrite(led2,HIGH);
//     delay(5000);
//     digitalWrite(led2, LOW);
//     digitalWrite(led3, LOW);
//     digitalWrite(led1,HIGH);
//     delay(2000);
//     digitalWrite(led2, LOW);
//     digitalWrite(led1, LOW);
//     digitalWrite(led3,HIGH);
//     delay(5000);
//     if(digitalRead(s2)==LOW){
//       int flags = 2;
//     }
//     }
//   }
//   if(digitalRead(s2)==LOW)
//   {
//     int flags = 2;
//     while(flags == 2){
//     digitalWrite(led2, LOW);
//     digitalWrite(led3, LOW);
//     digitalWrite(led1,HIGH);
//     delay(1000);
//     digitalWrite(led2, LOW);
//     digitalWrite(led3, LOW);
//     digitalWrite(led1, LOW);
//     delay(1000);
//     if(digitalRead(s1)==LOW){
//       flags = 1;
//     }
//     }

//   }
//   // else
//   // {
//   //   //digitalWrite(led2,HIGH);
//   // }
//   //   if(digitalRead(s2)==LOW)
//   // {
//   //   digitalWrite(led2, LOW);
    
//   // }
//   // else
//   // {
//   //   digitalWrite(led2,HIGH);
//   // }
//   //   if(digitalRead(s3)==LOW)
//   // {
//   //   digitalWrite(led3, LOW);
    
//   // }
//   // else
//   // {
//   //   digitalWrite(led3,HIGH);
//   // }

// }


// int s1=10;
// int s2=11;
// int led1 = 2;
// int led2 = 3;
// int led3 = 4;
// int a,b,c,d = 0;
// void setup() {
//   pinMode(led1,OUTPUT);
//   pinMode(led2,OUTPUT);
//   pinMode(led3,OUTPUT);
//   pinMode(s1,INPUT_PULLUP);
//   pinMode(s2,INPUT_PULLUP);
// }

// void loop(){
//   if(digitalRead(s1)==LOW)
//   {
//     while(1){
//       a = 0;
//       b = 0;
//       c = 0;
//       digitalWrite(led1, HIGH); // 녹색
//       digitalWrite(led2, LOW); // 빨강
//       digitalWrite(led3, LOW); // 노랑
//       while(a<=5000){
//         delay(1);
//         a++;
//         if(digitalRead(s2) == LOW){ //야간모드가 눌리면
//           a+=20000;
//         }
//       }
//       if(a>10002){
//         break;
//       }


//       digitalWrite(led1,LOW); //녹색
//       digitalWrite(led2, LOW); //빨강
//       digitalWrite(led3, HIGH); //노랑
//       while(b<=2000)
//       {
//         delay(1);
//         b++;
//         if(digitalRead(s2)==LOW)
//         {
//           b+=4000;
//         }
//       }
//       if(b>2002)
//       {
//         break;
//       }

//       digitalWrite(led1,LOW); //녹색
//       digitalWrite(led2, HIGH); //빨강
//       digitalWrite(led3, LOW); //노랑

//       while(c<=5000)
//       {
//         delay(1);
//         c++;
//         if(digitalRead(s2)==LOW)
//         {
//           c+=10000;
//         }
//       }
//       if(c>6000)
//       {
//         break;
//       }

//       }
//   }

//   if(digitalRead(s2)==LOW)  // 야간스위치
//   {
//     digitalWrite(led1,LOW); //녹색
//     digitalWrite(led2, LOW); //빨강
//     while(1){
//       d=0;
//       digitalWrite(led3,HIGH);
//       while(d<=1000){
//         delay(1);
//         d++;
//         if(digitalRead(s1)==LOW)
//         {
//           d+= 2000;
//         }
//       }
//       if(d>2002){
//         break;
//       }
//       d = 0;
//       digitalWrite(led3, LOW);
//       while(d<=1000){
//         delay(1);
//         d++;
//         if(digitalRead(s1)==LOW)
//         d+=2000;
//       }
//       if(d>2002)
//       break;
//     }
//   }

// }

// #define BLUE 11
// #define GREEN 10
// #define RED 9
// void setup(){
//   pinMode(RED, OUTPUT);
//   pinMode(GREEN, OUTPUT);
//   pinMode(BLUE, OUTPUT);
//   digitalWrite(RED, HIGH);
//   digitalWrite(GREEN,LOW);
//   digitalWrite(BLUE, LOW);
// }


// 자연스러운 LED
// void loop(){
//   int redValue;
//   int greenValue;
//   int blueValue;
//   redValue = 255;
//   greenValue = 0;
//   blueValue = 0;
//   for(int i = 0; i < 255; i+=1){
//     redValue -= 1;
//     greenValue += 1;
//     analogWrite(RED, redValue);
//     analogWrite(GREEN, greenValue);
//     delay(10);
//   }

//   redValue = 0;
//   greenValue = 255;
//   blueValue = 0;
//   for (int i = 0; i < 255; i+=1){
//     greenValue -= 1;
//     blueValue += 1;
//     analogWrite(GREEN, greenValue);
//     analogWrite(BLUE, blueValue);
//     delay(10);
//   }

//   redValue = 0;
//   greenValue = 0;
//   blueValue = 255;
//   for (int i = 0; i < 255; i+=1){
//     blueValue -= 1;
//     redValue += 1;
//     analogWrite(BLUE, blueValue);
//     analogWrite(RED, redValue);
//     delay(10);
//   }

// }

// 소리센서
// const int SOUND_SENSOR_PIN = A0;
// int sensorValue;
// void setup(){
//   Serial.begin(9600);
// }

// void loop(){
//   sensorValue = analogRead(SOUND_SENSOR_PIN);
//   if(sensorValue>100)
//     Serial.println(sensorValue);
//     delay(20);
// }

//초음파 센서
// int echoPin = 9;
// int trigPin = 8;
// void setup(){
//   Serial.begin(9600);
//   pinMode(trigPin, OUTPUT);
//   pinMode(echoPin, INPUT);
//   }

//   void loop(){
//       digitalWrite(trigPin, LOW);
//       digitalWrite(echoPin, LOW);
//       delayMicroseconds(2);
//       digitalWrite(trigPin, HIGH);
//       delayMicroseconds(10);
//       digitalWrite(trigPin, LOW);
//       unsigned long duration = pulseIn(echoPin, HIGH);
//     float distance = ((float)(340 * duration )/ 10000 / 2);

//     Serial.print(distance);
//     Serial.println("cm");
//     delay(500);
    


//   }

//부저센서

// void setup(){
//   pinMode(13,OUTPUT);
// }

// void loop(){
//   tone(13,262);
//   delay(1000);
//   noTone(13);
//   delay(1000);
// }


// #define C 262 // 도 
// #define D 294 // 레 
// #define E 330 // 미 
// #define F 349 // 파 
// #define G 392 // 솔 
// #define A 440 // 라 
// #define B 494 // 시 

// int piezoPin = 13; // 부저의 ⊕극을 오렌지 보드 8번에 연결 
// int tempo = 200; // duration 옵션 값 설정 
// int notes[25] = { G, G, A, A, G, G, E, G, G, E, E, D, G, G, A, A, G, G, E, G, E, D, E, C }; 

// void setup() { 
//   pinMode (piezoPin, OUTPUT); 
// } 

// void loop() { 
//   for (int i = 0; i < 12; i++) { 
//     tone (piezoPin, notes[ i ], tempo); 
//     delay (300); 
//   } 
//   delay(100); // 멜로디 중간에 짧게 멈추는 용도 

//   for (int i = 12; i < 25; i++) { 
//     tone (piezoPin, notes[ i ], tempo); 
//     delay(300); 
//   } 
// }


//초음파 센서 + 부저센서
// int echoPin = 9;
// int trigPin = 8;
// void setup(){
//   Serial.begin(9600);
//   pinMode(trigPin, OUTPUT);
//   pinMode(echoPin, INPUT);
//   pinMode(13,OUTPUT);
//   }

//   void loop(){
//       digitalWrite(trigPin, LOW);
//       digitalWrite(echoPin, LOW);
//       delayMicroseconds(2);
//       digitalWrite(trigPin, HIGH);
//       delayMicroseconds(10);
//       digitalWrite(trigPin, LOW);
//       unsigned long duration = pulseIn(echoPin, HIGH);
//     float distance = ((float)(340 * duration )/ 10000 / 2);

//     Serial.print(distance);
//     Serial.println("cm");
//     if(distance <= 10){
//       tone(13,262);
//       delay(100);
//       noTone(13);
//       delay(100);
//     }
//     else if (10 < distance <= 30){
//       tone(13,262);
//       delay(1000);
//       noTone(13);
//       delay(100);
//     }
//     else {
//       noTone(13);
//       delay(500);
    
//     }
//   }

int photocellPin = A2;
int val = 0;
int ledPin = 13;
void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(photocellPin,INPUT);
  Serial.begin(9600);
}
void loop(){
  val = analogRead(photocellPin);
  Serial.println(val);
  if(val<=512){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  delay(100);
}