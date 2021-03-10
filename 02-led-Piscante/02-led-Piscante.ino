/*Autor: André Lubawski
 * Data: 10/03/2021
 * 
 * O código faz com que um led seja aceso
 * 
 */
void setup() {
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(300);

}
