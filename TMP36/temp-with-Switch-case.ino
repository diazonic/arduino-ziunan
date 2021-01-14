int sensorinput;
double temp;
int fin;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop()
{
  sensorinput = analogRead(A0);
  //Serial.println(sensorinput);
  temp = (double)sensorinput/1024;//Find percentage of every value
  temp = temp*5;//Multiply voltage value - 5V
  temp = temp-0.5; //Subtract with Offset voltage
  temp = temp*100; //converting milli volts to celsius multiply 100
  Serial.println(temp);
  fin = (int)temp;
  switch(fin)
  {
    case -30 ... -1:
    	digitalWrite(7,1);
        digitalWrite(6,0);
        digitalWrite(5,0);
        digitalWrite(4,0);
    	break;
    case 0 ... 20:
    	digitalWrite(7,1);
        digitalWrite(6,1);
        digitalWrite(5,0);
        digitalWrite(4,0);
    	break;
    case 21 ... 40:
    	digitalWrite(7,1);
        digitalWrite(6,1);
        digitalWrite(5,1);
        digitalWrite(4,0);
    	break;
    case 41 ... 120:
    	digitalWrite(7,1);
        digitalWrite(6,1);
        digitalWrite(5,1);
        digitalWrite(4,1);
    	break;
    default:
    	digitalWrite(7,0);
        digitalWrite(6,0);
        digitalWrite(5,0);
        digitalWrite(4,0);
    	Serial.println("WRONG VALUE");
    	break;
  }


}
//Min - -40
//Max - 125
