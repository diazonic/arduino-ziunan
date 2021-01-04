/* PWM - Pulse Width Modulation
Digital to Analog = PWM


analogWrite Values 
Min = 0 ( 0V)
Max = 2^8-1 ( 8 bit microcontroller)
Max = 255 (5V)

digitalWrite Values
Min = 0
Max = 1

LED - Forward Voltage - 2V to 3.3V

RGB LED
1. Common Cathode - Negative is common pin
2. Common Anode - Positive is common pin

Task : Using Serial Command, I want 3 different colors apart from RGB
Yellow,Violet and Orange

Violet - 128,0,128
Yellow - 255,255,0
Orange - 255,165,0

*/

void setup()
{
  for(int i = 9;i<=11;i++)
  {
  pinMode(i,OUTPUT); // 11- Red, 10- Blue ,9 - Green
  }
  Serial.begin(9600);
}
void loop()
{
  int d = 100;
  for(int i = 0;i<=255/2;i = i+10)
  {
    analogWrite(11,i);
    analogWrite(10,0);
    analogWrite(9,0);
    delay(d);
  }
  for(int i = 255/2;i>=10;i = i-10)
  {
    analogWrite(11,i);
    analogWrite(10,0);
    analogWrite(9,0);
    delay(d);
  }
  for(int i = 0;i<=255/2;i = i+10)
  {
    analogWrite(11,0);
    analogWrite(10,0);
    analogWrite(9,i);
    delay(d);
  }
  for(int i = 255/2;i>=10;i = i-10)
  {
    analogWrite(11,0);
    analogWrite(10,0);
    analogWrite(9,i);
    delay(d);
  }
  for(int i = 0;i<=255/2;i = i+10)
  {
    analogWrite(11,0);
    analogWrite(10,i);
    analogWrite(9,0);
    delay(d);
  }
  for(int i = 255/2;i>=10;i = i-10)
  {
    analogWrite(11,0);
    analogWrite(10,i);
    analogWrite(9,0);
    delay(d);
  }
      
}
