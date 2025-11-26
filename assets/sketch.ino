int ledr = 13;
int ledb = 12;
int btnb = 10;
int btnm = 11;
int btnstateb = 0;
int btnstatem = 0;
void setup() {
  pinMode(ledr, OUTPUT);
  pinMode(ledb, OUTPUT);
  pinMode(btnb, INPUT);
  pinMode(btnm, INPUT);
}

void loop() {
btnstateb = digitalRead(btnb);
btnstatem = digitalRead(btnm);

if(btnstateb == HIGH)
  digitalWrite(ledb, HIGH);
else{
  digitalWrite(ledb, LOW);
}

if(btnstatem == HIGH)
  digitalWrite(ledr, HIGH);
else{
  digitalWrite(ledr, LOW);
}
}
