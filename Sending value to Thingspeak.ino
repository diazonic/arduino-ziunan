int val = 0; 

void setup()
{
  Serial.begin(115200);
  delay(100);
  Serial.println("AT+CWJAP=\"Simulator Wifi\",\"\"\r\n");
  delay(3000);
   pinMode(A0,INPUT);
}

void loop()
{
  val = analogRead(A0);    // read the value from the sensor
  Serial.println(val);
  Serial.println("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
  delay(3000);
  int len = 60;
  Serial.print("AT+CIPSEND=");
  Serial.println(len);
  delay(1000);
  Serial.print("GET /update?api_key=Q2R6AD7ZN1OI00D1&field1=");
  Serial.print(val);
  Serial.println(" HTTP/1.1\r\n");
  delay(1000);
  Serial.println("AT+CIPCLOSE=0\r\n");
  delay(10000);// Thingspeak free account
  
}
