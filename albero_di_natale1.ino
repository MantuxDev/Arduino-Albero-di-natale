void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(12,HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}