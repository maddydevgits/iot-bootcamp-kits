void setup() {
 pinMode(8,OUTPUT);
 pinMode(3,INPUT);
}
void loop(){
 digitalWrite(8,digitalRead(3));
}
