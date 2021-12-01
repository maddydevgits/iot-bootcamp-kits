void setup() {
 pinMode(5,INPUT);
 Serial.begin(9600);
}

void loop() {
 int m=digitalRead(5);
 Serial.println(m);
 if (m==1)
  Serial.println("Person Detected");
 else
  Serial.println("Person not Detected");
}
