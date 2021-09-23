int n = 100;

void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop()
{ 
  color(255,0,255);
  color(128,128,0);
}

void color(int r0, int g0, int b0)
{
  
  for(int i=0;i<=n;i++)
  {
    int r= (i * r0)/n;
    int g= (i * g0)/n;
    int b= (i * b0)/n;
    analogWrite(9,r);
    analogWrite(10,g);
    analogWrite(11,b);
    delay(20);
  }
  for(int i=n;i>0;i--)
  
  {
    int r= (i * r0)/n;
    int g= (i * g0)/n;
    int b= (i * b0)/n;
    analogWrite(9,r);
    analogWrite(10,g);
    analogWrite(11,b);
    delay(20);
  }
 
}
