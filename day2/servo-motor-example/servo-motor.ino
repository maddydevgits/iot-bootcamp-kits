#include <Servo.h>
Servo motor;
void setup() {
 motor.attach(3);
 motor.write(0);
}

void loop() {
 for(int i=0;i<=180;i++) {
   motor.write(i);
   delay(10);
 }
 for(int j=180;j>=0;j--) {
  motor.write(j);
  delay(10);
 }
}
