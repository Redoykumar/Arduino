int t=6;
int e=5;
float d;
float du;
void setup() {
pinMode(t,OUTPUT); 
pinMode(e,INPUT); 
Serial.begin(9600);
Serial.println("Distance Find");
}

void loop() {
  digitalWrite(t,LOW);
  delayMicroseconds(2);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  du=pulseIn(e,HIGH);
  d=du*0.034/2;
  Serial.print("Distance : ");
  Serial.print(d);
  Serial.println("CM");
  Serial.print("Distance : ");
  Serial.print(d*0.393701);
  Serial.println("Inches");
  delay(1000);
  
 

}
