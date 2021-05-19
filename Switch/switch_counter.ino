//1. Use switch button as a counter
int count = 0;
int flag = true;//Checking the status of switch
// false meaning switch isnt pressed
void setup()
{
  pinMode(7,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a = digitalRead(7);
  if(a == 0 and flag==true)
  {
    count = count+1;
    flag=false;
    Serial.println(count);
    if(count%2==0)
    {
      digitalWrite(13,1);
    }
    else
    {
      digitalWrite(13,0);
    }
  }
  if( a == 1 and flag==false)
  {
    flag=true;
  }
}
