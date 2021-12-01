void setup(){
 pinMode(A0,INPUT);
 pinMode(2,OUTPUT);
 Serial.begin(9600);
}

void loop() {
 int m=analogRead(A0);
 Serial.println(m);
 if (m>86) 
  digitalWrite(2,1);
 else
  digitalWrite(2,0);
}
