int tempo = 500;

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 7;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(tempo);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led6, HIGH);
  delay(tempo);
  
  digitalWrite(led6, LOW);
  delay(tempo);
  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  delay(tempo);
}
