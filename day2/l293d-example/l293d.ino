#define pM(a,b) pinMode(a,b)
#define dW(a,b) digitalWrite(a,b)
#define IN INPUT
#define OUT OUTPUT

int en1=2;
int in1=3;
int in2=4;

void setup() {
  pM(en1,OUT);
  pM(in1,OUT);
  pM(in2,OUT);
  Serial.begin(9600);
}

void loop() {
 while(!Serial.available());
 String s=Serial.readString();
 if(s=="a") {
  dW(en1,1);
  dW(in1,1);
  dW(in2,0);
 }
 else if(s=="b") {
  dW(en1,1);
  dW(in1,0);
  dW(in2,1);
 }
 else if(s=="c") {
  dW(en1,0);
 }
}
