int flag;

void setup() {
 pinMode(7,OUTPUT);
 pinMode(2,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(2)==0){
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(500);
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
    delay(500);
    }
}
