int vermelho = 12;
int azul = 11;
int verde = 10;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);

}

void loop() {
  //valor permitido: 0 a 255
  
  //analogWrite(vermelho, 255);
  //analogWrite(verde, 150);
  analogWrite(azul, 150);
}
