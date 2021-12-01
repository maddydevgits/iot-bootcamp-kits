int trig=3;
int echo=5;

void setup(){
 pinMode(8,OUTPUT);
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(trig,0);
 delayMicroseconds(10);

 digitalWrite(trig,1);
 delayMicroseconds(2);
 digitalWrite(trig,0);

 int duration=pulseIn(echo,1);
 float distance = (duration*0.034)/2;
 Serial.print("Distance:");
 Serial.print(distance);
 Serial.println(" cm");
 if (distance<10)
  digitalWrite(8,1);
 else
  digitalWrite(8,0);
}
