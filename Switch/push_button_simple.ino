// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  //  pinMode(7, INPUT_PULLUP); Not put Pull up resistor and wire to +
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(7);
  Serial.println(val);
  if(val == 1)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
}

//https://www.deviceplus.com/arduino/the-basics-of-arduino-reading-switch-states/
