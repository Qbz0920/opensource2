int ledPin=13;

void setup() {
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int a=0;a<=255;a++)
{
  analogWrite(ledPin,a);
  delay(8);
}
for(int a=255;a>=0;a--)
{
  analogWrite(ledPin,a);
  delay(8);
}
}
