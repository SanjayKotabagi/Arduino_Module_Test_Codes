int data ;
void setup() {
  pinMode(0,INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  data = analogRead(0);
  Serial.println(data);
  data = data/4 ;
  analogWrite(3,data);
  delay(100);
}
