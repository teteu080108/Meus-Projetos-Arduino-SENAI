int tempo = 1000;
int aux = 0;

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 7;

int botao1 = 5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  pinMode(botao1, INPUT);
}

void loop() {
    // Sequência de LEDs que usam a variável 'tempo'
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(tempo);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    delay(tempo);

    // Lógica para ler o botão e mudar a velocidade (tempo)
    if(digitalRead(botao1) == HIGH){
      aux = aux + 1;
      delay(500); // Delay para evitar que um clique conte várias vezes (debounce)
    }
    
    if(aux > 3){
      aux = 0;
    }

    // Define a velocidade baseada no valor da variável auxiliar
    if(aux == 0) tempo = 1000;
    if(aux == 1) tempo = 500;
    if(aux == 2) tempo = 100;
    if(aux == 3) tempo = 50;
}
