#include <Blink.h>

Blink pin(3);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
pin.blink(ON,8);//这里延时时间取8

}
