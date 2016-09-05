void setup() {
pinMode(A0, INPUT);
digitalWrite(A0, 1);
pinMode(12, OUTPUT);

}

void loop() {
if(digitalRead(A0)==0){
  digitalWrite(12, 1);
  
}
else {
  digitalWrite(12,0);
}
}
