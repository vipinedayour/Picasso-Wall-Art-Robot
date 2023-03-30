void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);// 2 dir
pinMode(3,OUTPUT);// 3 pul
pinMode(4,OUTPUT);//4 dir
pinMode(5,OUTPUT);// 5 pull
digitalWrite(2,HIGH);
digitalWrite(4,LOW);
}

void loop() {
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
  digitalWrite(5,HIGH);
  delayMicroseconds(60);
  }
