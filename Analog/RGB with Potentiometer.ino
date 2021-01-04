/*
Digital vs Analog

digitalWrite - 0 and 1
digitalRead - ( range is undefined)
analogWrite - 0 to 255 ( 8 bit microcontroller) - 2^8-1
analogRead - 0 to 1023 
ADC - 10 bit ADC = 2^10-1


Map the value - 
0 - 0V and 255 - 5V - analogWrite
0 - 0V and 1023 - 5V - analogRead

*/
void setup()
{
  pinMode(A0, INPUT); // R Scale
  pinMode(A1, INPUT); // G Scale
  pinMode(A2, INPUT); // B Scale
  pinMode(9,OUTPUT);   //Green
  pinMode(10,OUTPUT);  //Blue
  pinMode(11,OUTPUT);  //Red
  Serial.begin(9600);
}

void loop()
{
  int r_scale = analogRead(A0);
  int g_scale = analogRead(A1);
  int b_scale = analogRead(A2);
  delay(100);
  
  int  r_map_value = map(r_scale,0,1023,0,255);
  int  g_map_value = map(g_scale,0,1023,0,255);
  int  b_map_value = map(b_scale,0,1023,0,255);
  
  analogWrite(11,r_map_value);
  analogWrite(9,g_map_value);
  analogWrite(10,b_map_value);
  Serial.print("RGB Value ");
  Serial.print(r_map_value);
  Serial.print(" ");
  Serial.print(g_map_value);
  Serial.print(" ");
  Serial.println(b_map_value);
  delay(1000);
}
