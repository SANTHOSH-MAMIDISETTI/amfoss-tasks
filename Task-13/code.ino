//TASK-13 CODE
//EXPLANATION IN README.md OF THAT RESPECTIVE FOLDER.
// ALL OF THIS CODE IS WRITTEN BY ME..
int Time ;
int distance;
void setup()
{
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);
}
void loop()
{
digitalWrite(2,HIGH);
//delayMicroseconds(10);
digitalWrite(2,LOW);
//delayMicroseconds(5);
digitalWrite(2,HIGH);
//delayMicroseconds(10);

Time = pulseIn(3,HIGH);

distance= 0.0343*Time/2;
Serial.print("distance from sensor to object is =");
Serial.println(distance);
//delay(5);

if(distance<300)
{
digitalWrite(6,HIGH);
digitalWrite(4,LOW);
}
if(distance>300)
{
digitalWrite(4,HIGH);
digitalWrite(6,LOW);
}
}
