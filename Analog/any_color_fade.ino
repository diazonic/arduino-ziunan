int r0= 255;
int g0= 0;
int b0= 128;

void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<=100;i++)
  {
    int r= (i * r0)/100;
    int g= (i * g0)/100;
    int b= (i * b0)/100;
    analogWrite(9,r);
    analogWrite(10,g);
    analogWrite(11,b);
    Serial.print(r);
    Serial.print(" ");
    Serial.print(g);
    Serial.print(" ");
    Serial.print(b);
    Serial.println(" ");
    delay(10);
  }
  for(int i=100;i>0;i--)
  
  {
    int r= (i * r0)/100;
    int g= (i * g0)/100;
    int b= (i * b0)/100;
    analogWrite(9,r);
    analogWrite(10,g);
    analogWrite(11,b);
    Serial.print(r);
    Serial.print(" ");
    Serial.print(g);
    Serial.print(" ");
    Serial.print(b);
    Serial.println(" ");
    delay(10);
  }
  
  
}
