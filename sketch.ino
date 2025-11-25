int ledb = 8;
int ledm = 9;

void setup() {
Serial.begin(9600);
pinMode(ledb, OUTPUT);
pinMode(ledm, OUTPUT);

}

void loop() {
digitalWrite(ledb, HIGH);
digitalWrite(ledm, LOW);
Serial.println("BLUE");
delay(3000);
digitalWrite(ledb, LOW);
digitalWrite(ledm, HIGH);
Serial.println("MERAH");
delay(1000);

}
