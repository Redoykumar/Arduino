
void setup() {
pinMode(6,INPUT);  
Serial.begin(9600);
}

void loop() {
  int r=digitalRead(6);
 
    Serial.println(r);
    delay(250);
 

}
