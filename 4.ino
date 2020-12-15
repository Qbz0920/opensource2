#include <Blink.h>
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

Blink pin(3);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
}
float t1,t;
void loop() {
  // put your main code here, to run repeatedly:
if(t1<t)
{
  pin.blink(ON,4);
}
else if(t1>t)
{
  pin.blink(ON,12);
}
else if(t1==t)
{
  pin.blink(ON,8);
}
t1=t;
t = dht.readTemperature();
}
