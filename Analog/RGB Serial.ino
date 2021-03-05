//Take String or Character
// For RGB Values, use digitalWrite
// For other colors, use AnalogWrite
//https://www.tydac.ch/color/
String value;

void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    value = Serial.readString();
  }
  if (value == "RED")
  {
    digitalWrite(11,1);
    digitalWrite(10,0);
    digitalWrite(9,0);
  }
  else if (value == "BLUE")
  {
    digitalWrite(11,0);
    digitalWrite(10,1);
    digitalWrite(9,0);
  }
  else if (value == "GREEN")
  {
    digitalWrite(11,0);
    digitalWrite(10,0);
    digitalWrite(9,1);
  }
  else if ( value == "VIOLET")
  {
    analogWrite(11,238);
    analogWrite(10,238);
    analogWrite(9,130);
  }
  else
  {
    digitalWrite(11,0);
    digitalWrite(10,0);
    digitalWrite(9,0);
  }
    
    


}
