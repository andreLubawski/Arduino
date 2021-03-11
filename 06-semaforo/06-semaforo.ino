/*Autor: André Lubawski
 * Data: 11/03/2021
 * 
 * OBS: Caso o projeto seja executado em um arduino, verifique as informações
 * sobre cada LED no site do fabricante, para poder obter a resistência mínima
 * necessária para que nada seja danificado. Se você sor executar no TinkerCad,
 * pode variar os valores de resistência para ver o que acontece
 * (sugestão: utilize o valor de 150 ohms)
 *
 */
void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {

  digitalWrite(10, HIGH);
  delay(10000);

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(4000);

  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(8000);

  digitalWrite(8, LOW);
  
}
