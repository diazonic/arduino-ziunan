// C++ code
//Receiver Arduino
char x[10];
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.readBytes(x,7);
  Serial.println(x);
  delay(500);

}



