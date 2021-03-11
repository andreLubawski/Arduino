/*Autor: André Lubawski
 *Data: 10/03/2021
 * 
 * Nesse programa, o led é ativado através de um botão
 */
void setup() {
 pinMode(2, OUTPUT);
 pinMode(7, INPUT_PULLUP);
 Serial.begin(9600);
}

void loop() {
  int botaoEstadoAtual = digitalRead(7);
  Serial.println(botaoEstadoAtual);
  /*
   * no monitor serial, o estado deve indicar '1', quando o botão ficar 
   * pressionado(MANTENHA O BOTÃO PRESSIONADO!), o estado deve ser alterado para zero
   */
   if(botaoEstadoAtual == 0){
    digitalWrite(2, HIGH);//quero que o led fique aceso quando o botão estiver pressionado
   }else{
    digitalWrite(2, LOW);
   }
}
