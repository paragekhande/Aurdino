void setup() {
  // put your setup code here, to run once:

pinMode(9,OUTPUT);

pinMode(10,OUTPUT);
Serial.begin(9600);

}

void loop() {
  Serial.println("Working");
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
delay(5000);
Serial.println("Forward");
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(3000);
Serial.println("stop");
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(5000);
Serial.println("Reverse");
}
