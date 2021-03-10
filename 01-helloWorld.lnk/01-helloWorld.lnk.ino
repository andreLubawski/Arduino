/*Autor: André Lubawski
 *Data: 10/03/2021
 *
 * Existe um led soldado em série com o pino 13 no arduino
 * 
 * O código a seguir, é uma espécie de equivalente ao famoso hello world
 * das diversas linguagens de programação
 * 
 * O objetivo é fazer o led piscar por um determinado período
 * 
 * ATENÇÃO: certifique-se de que as configurações da porta utilizada estejam corretas
 * vá em ferramentas -> porta -> escolha a opção que contém seu arduino.
 */

void setup() {

  pinMode(13, OUTPUT);
 /*o pino digital é confirgurado como OUT, ou seja, 
  * alguma informação sairá dali
  */

}

void loop() {
  
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  /*
   * escreva no pino digital 13: Estado ALTO, corrente é fornecida
   * espere 1000 milissegundos
   * Estao BAIXO, o fornecimento de corrente é interrompido
   * espere 1 segundo
   */
}
