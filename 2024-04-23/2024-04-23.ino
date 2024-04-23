// 서브 모터
// #include <Servo.h>
// Servo myservo;
// int pos=0;
// int servoPin=6;

// void setup() {
//   // put your setup code here, to run once:
//   pinMode(servoPin,OUTPUT);
//   myservo.attach(6);

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   for (pos = 0; pos <=180; pos+=1)
//   {
//     myservo.write(pos);
//     delay(100);
//   }
//   for (pos = 180; pos >= 0; pos -= 1)
//   {
//     myservo.write(pos);
//     delay(100);
//   }

// }

//가변저항
// int LED = 9;
// void setup(){
//   Serial.begin(9600);
//   pinMode(LED,OUTPUT);
// }
// void loop(){
//   int val = analogRead(A5)/4;
//   Serial.println(val);
//   analogWrite(LED,val);
// }

//가변저항 + 서브모터
// #include <Servo.h>
// Servo myservo;
// int pos=0;
// int servoPin=6;
// void setup(){
//   Serial.begin(9600);
//   pinMode(servoPin,OUTPUT);
// }
// void loop(){
//   int val = analogRead(A5)/4;
//   Serial.println(val);
//   analogWrite(servoPin,val);
// }

//SETP MOTOR
// #include <Stepper.h>
// const int stepsPerRevolution = 2048;
// Stepper myStepper(stepsPerRevolution, 8,10,9,11);
// void setup() {
//   myStepper.setSpeed(10);
// }
// void loop() {
//   myStepper.step(stepsPerRevolution);
//   delay(500);
//   myStepper.step(-stepsPerRevolution);
//   delay(500);
// }

//온습도센서
// #include <DHT11.h>
// DTT11 dht11 (2);
// void setup(){
//   Serial.begin(9600);
// }

// void loop() {
//     int temperature = 0;
//     int humidity = 0;

//     // Attempt to read the temperature and humidity values from the DHT11 sensor.
//     int result = dht11.readTemperatureHumidity(temperature, humidity);

//     // Check the results of the readings.
//     // If the reading is successful, print the temperature and humidity values.
//     // If there are errors, print the appropriate error messages.
//     if (result == 0) {
//         Serial.print("Temperature: ");
//         Serial.print(temperature);
//         Serial.print(" °C\tHumidity: ");
//         Serial.print(humidity);
//         Serial.println(" %");
//     } else {
//         // Print error message based on the error code.
//         Serial.println(DHT11::getErrorString(result));
//     }
// }

//인체감지센서
// int LED = 2;
// int sensor = 7;
// int value = 0;
// void setup(){
//   pinMode(LED,OUTPUT);
//   pinMode(sensor,INPUT);
// }
// void loop(){
//   value = digitalRead(sensor);
//   if(value == HIGH)
//   {
//     digitalWrite(LED,HIGH);
//   }
//   else
//   {
//     digitalWrite(LED,LOW);
//   }
// }
// int photocellPin = A0;
// int val = 0;
// int ledPin = 13;
// int in2 = 5;
// void setup(){
//   pinMode(ledPin,OUTPUT);
//   pinMode(photocellPin,INPUT);
//   pinMode(in2,OUTPUT);
//   Serial.begin(9600);
  
// }
// void loop(){
//   val = analogRead(photocellPin);
//   Serial.println(val);
//   if(val>=600){
//     digitalWrite(ledPin, HIGH);
//   }
//   else{
//     digitalWrite(ledPin, LOW);
//   }
//   delay(100);
// }
// int echoPin = 8;
// int trigPin = 9;
// void setup(){
//   pinMode(7,OUTPUT);
//   pinMode(6,OUTPUT);
//   pinMode(5,OUTPUT);
//   pinMode(trigPin, OUTPUT);
//   Serial.begin(9600);
//   pinMode(echoPin, INPUT);
// }
// void loop(){
//   digitalWrite(trigPin,LOW);
//   //digitalWrite(echoPin, LOW);
//   delayMicroseconds(2);
//   digitalWrite(trigPin,HIGH);
//   delayMicroseconds(5);
//   digitalWrite(trigPin,LOW);
//   //delayMicroseconds(2);

  
//   double duration = pulseIn(echoPin,HIGH);
//   double cm = duration * 340 / 10000 / 2;
//   Serial.print(cm);
//   Serial.println("cm");
//   if (cm < 20){
//     digitalWrite(7,HIGH);
//     digitalWrite(6,LOW);
//     digitalWrite(5,LOW);
//   }
//   else if (cm < 60){
//     digitalWrite(7,LOW);
//     digitalWrite(6,HIGH);
//     digitalWrite(5,LOW);
//   }
//   else{
//     digitalWrite(7,LOW);
//     digitalWrite(6,LOW);
//     digitalWrite(5,HIGH);
//   }
//   delay(100);
// }


// #include <Servo.h>
// Servo myservo;
// int pos=0;
// int servoPin=9;


// int c1 = A0;
// int c2 = A1;
// int c3 = A2;

// int led1 = 1; 
// int led2 = 2; 
// int led3 = 3; 
// void setup() {
//   pinMode(led1, OUTPUT);
//   pinMode(led2, OUTPUT);
//   pinMode(led3, OUTPUT);
//   pinMode(servoPin,OUTPUT);
//   myservo.attach(9);
// }
 
// void loop() {
//   int cdsVal1 = analogRead(c1);
//   int cdsVal2 = analogRead(c2);
//   int cdsVal3 = analogRead(c3);

 
//   // Serial.print("c3 =  ");
//   // Serial.println(cdsVal3);

//   if (cdsVal1 > 220) {    
//     digitalWrite(led1, HIGH);     
//   } 
//   else {    
//     digitalWrite(led1, LOW);      
//   }

//   if (cdsVal2 > 220) {    
//     digitalWrite(led2, HIGH);     
//   } 
//   else {    
//     digitalWrite(led2, LOW);      
//   }

//   if (cdsVal3 > 220) {    
//     digitalWrite(led3, HIGH);

//   } 
//   else {    
//     digitalWrite(led3, LOW);      
//   }

//   if (digitalRead(led1)==HIGH && digitalRead(led2)==HIGH && digitalRead(led3)==HIGH )
//   {

//     for (pos = 0; pos <=270; pos+=1)
//     {
//       myservo.write(pos);
//       delay(10);
//     }
//     // if(pos == 0);
//     //   pos += 1;
//     //   if(pos == 270);
//     //   pos = 270;
  
//   }

// }


// //서브 모터
#include <Servo.h>
Servo myservo;
int pos=0;
int servoPin=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(servoPin,OUTPUT);
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <=180; pos+=1)
  {
    myservo.write(pos);
    delay(2);
  }
  for (pos = 180; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    delay(2);
  }
}