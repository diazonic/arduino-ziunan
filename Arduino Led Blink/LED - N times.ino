int a=0;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    a= Serial.parseInt();
    Serial.print(a);
  
  for(int i=0; i<a; i++)
  {
    digitalWrite(8,1);
    delay(1000);
    digitalWrite(8,0);
    delay(1000);
  }
}
}
