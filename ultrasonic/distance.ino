int distance;
int duration;
void setup()
{
  pinMode(7,OUTPUT);//TRIGGER
  pinMode(6,INPUT);//ECHO
  Serial.begin(9600);
}

//Trigger - off (2 micro sec)
//Trigger - on (10 micro sec)
//Trigget - off

//echo - pulseIn(6,1)

// distance = time*speed/2;

void loop()
{
  digitalWrite(7,0);
  delayMicroseconds(2);
  digitalWrite(7,1);
  delayMicroseconds(2);
  digitalWrite(7,0);
  
  duration = pulseIn(6,1);
  distance = duration*34300/(2*1000000);
  Serial.println(distance);
  
}
