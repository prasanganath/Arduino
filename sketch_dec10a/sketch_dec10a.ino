void setup() {
  pinMode(4,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  

}

void loop() {
 if (digitalRead(4)==LOW){
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

  
 }
 else{
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
}
}
