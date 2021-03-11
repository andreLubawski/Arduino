/*Autor: André Lubawski
 * Data: 10/03/2021
 * 
 * Programa: Sinalizador de Código Morse S.O.S.
 * 
 * O padrão S.O.S. é formado por três pontos(sinais curtos), 
 * seguidos por três traços(sinais longos),
 * seguidos novamente por três pontos
 * 
 * OBS: O circuito utlizado é o mesmo do exemplo 02-led piscante
 */
int ledPin = 2;

void setup() {
  
  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  //3 pontos
 for (int x = 1; x < 4; x++){
     digitalWrite(ledPin, HIGH);
     delay(250);
     digitalWrite(ledPin, LOW);
     delay(100);
 }
delay(100);//tempo de espera para trocar iniciar o código de outra letra
for(int x = 1; x < 4; x++){
  //3 traços, o tempo em high deve ser aumentado para que o código faça sentido
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(100);
}
delay(100);

for(int x = 1; x < 4; x++){
  // 3 pontos
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(100);
}
delay(10000); // espera 10 segundos antes de enviar o código novamente
}
