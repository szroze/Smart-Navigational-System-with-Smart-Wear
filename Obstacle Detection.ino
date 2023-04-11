#include <SoftwareSerial.h>
#define maxDistance 120


SoftwareSerial HC05(2, 1); //Rx, Tx
int trigPin = 11;
int echoPin = 10;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HC05.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  long dur, dis;  //duration and distance
  //The reason for the usage of "long" is to avoid negative values returning.
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //measure distance
  dur = pulseIn(echoPin, HIGH);
  dis = (dur/29.0)/2; //distance in cm
  if (dis <= maxDistance) { //if an obstacle is within 1 meter
     HC05.println(dis);
     //to check with Serial monitor if the distance value is printed accurately
     Serial.println(dis);
  }
  delay(200);
}




