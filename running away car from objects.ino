const byte right_back=7;
const byte right_straight=6;
const byte left_straight=5;
const byte left_back=4;


const int echo=13;
const int trig=12;


int time =0;
int distance= 0;

void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(13,INPUT);
  
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);

}

void loop() 
{
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);

time=pulseIn(echo,HIGH);
distance=(time/2)/28.5;

Serial.print("distance: ");
Serial.println(distance);
delay(1000);
if(distance<30)
{
  digitalWrite(left_straight,LOW);
  digitalWrite(left_back,HIGH);
  digitalWrite(right_straight,LOW);
  digitalWrite(right_back,HIGH);
  delay(150);

  digitalWrite(left_straight,LOW);
  digitalWrite(left_back,HIGH);
  digitalWrite(right_straight,LOW);
  digitalWrite(right_back,HIGH);
  delay(150);
}
else 
{
  digitalWrite(left_straight,HIGH);
  digitalWrite(left_back,LOW);
  digitalWrite(right_straight,HIGH);
  digitalWrite(right_back,LOW);


}





}
