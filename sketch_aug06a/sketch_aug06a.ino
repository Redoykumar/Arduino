#include<Servo.h>
Servo ser;
void setup() {
  
  ser.attach(9);
}

void loop() {
 for(int i=0;i<=360;i+=10)
 {
   ser.write(i);
  delay(200);
 }
 
   
}
