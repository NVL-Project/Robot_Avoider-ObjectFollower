#include <NewPing.h>

int echo1 = 24; //left_sensor echo
int trig1 = 22; //left_sensor trig
int echo2 = 28; //central_sensor echo
int trig2 = 26; //central_sensor trig
int echo3 = 32; //right_sensor echo
int trig3 = 30; //right_sensor trig

#define maximum_distance1 200
#define maximum_distance2 200
#define maximum_distance3 200

const int LeftForward = 5;
const int LeftBackward = 4;
const int RightForward = 3;
const int RightBackward = 2;

const int enable1 = 6;
const int enable2 = 7;

NewPing sonar1(trig1,echo1,maximum_distance1);
NewPing sonar2(trig2,echo2,maximum_distance2);
NewPing sonar3(trig3,echo3,maximum_distance3);
int Left_Distance = 0,Right_Distance = 0,Middle_Distance = 0 ;
void _Forward()
{

    analogWrite(enable1, 255);
    analogWrite(enable2, 255);

    digitalWrite(LeftForward, HIGH);
    digitalWrite(LeftBackward, LOW);
    digitalWrite(RightForward, HIGH);
    digitalWrite(RightBackward, LOW);
    Serial.println("cm");
}
void _Back()
{

  analogWrite(enable1, 255);
  analogWrite(enable2, 255);

  digitalWrite(LeftForward, LOW);
  digitalWrite(LeftBackward, HIGH);
  digitalWrite(RightForward, LOW);
  digitalWrite(RightBackward, HIGH);
  Serial.println("cm\t\t");
}
void _left()
{

  analogWrite(enable1, 80);
  analogWrite(enable2, 255);

  digitalWrite(LeftForward, LOW);
  digitalWrite(LeftBackward, HIGH);
  digitalWrite(RightForward, HIGH);
  digitalWrite(RightBackward, LOW);
  Serial.println("cm\t\t");
}
void _right()
{

  analogWrite(enable1, 255);
  analogWrite(enable2, 100);

  digitalWrite(LeftForward, HIGH);
  digitalWrite(LeftBackward, LOW);
  digitalWrite(RightForward, LOW);
  digitalWrite(RightBackward, HIGH);
Serial.println("cm\t\t");
}
void _Stop()
{
  analogWrite(enable1, 0);
  analogWrite(enable2, 0);

  digitalWrite(LeftForward, LOW);
  digitalWrite(LeftBackward, LOW);
  digitalWrite(RightForward, LOW);
  digitalWrite(RightBackward, LOW);
  Serial.println("cm\t\t");
}

void setup()
{
Serial.begin(9600);
  pinMode(LeftForward, OUTPUT);
  pinMode(LeftBackward, OUTPUT);
  pinMode(RightForward, OUTPUT);
  pinMode(RightBackward, OUTPUT);

  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);

_Stop();
}
void loop()
{
  Left_Distance = sonar3.ping_cm();
  delay(10);
  Middle_Distance = sonar2.ping_cm();
  delay(10);
  Right_Distance = sonar1.ping_cm();
  delay(10);
  //Serial.println("Left_Distance\tMiddle_Distance\tRight_Distance\tStatus\n");
  Serial.print(Left_Distance);
  Serial.print("cm\t\t");
  Serial.print(Middle_Distance);
  Serial.print("cm\t\t");
  Serial.print(Right_Distance);
  Serial.println("cm\t\t");
  //delay(1000);

  if((Middle_Distance>=10) && (Middle_Distance<=30))
    _Forward();
  else if (Middle_Distance<5 && Middle_Distance>0)
    _Back();
  else if ((Right_Distance>=10) && (Right_Distance<=20))
    _right();
  else if((Left_Distance>=10) && (Left_Distance<=20))
    _left();
  else if(Middle_Distance>20)
    _Stop();
}
