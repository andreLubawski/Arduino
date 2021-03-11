/*Autor: André Lubawski
 * Data: 10/03/2021
 * o circuito utilizado é o mesmo do exemplo 04, porém, o código
 * a seguir permite manter o led ligado quando pressiono o botão
 * (sem a necessidade de manter o botão pressionado)
 */
int botaoAnterior = LOW;
int botaoAtual = LOW;
int botaoEstado = LOW;

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(2, OUTPUT);

}

void loop() {
  botao();
  botaoAnterior = botaoAtual;
  digitalWrite(2, botaoEstado);
}

boolean botao(){
  botaoAtual = digitalRead(7);
  if(botaoAtual == HIGH && botaoAnterior == LOW){
    if(botaoEstado == HIGH){
      botaoEstado = LOW;
      return botaoEstado;
    }else{
      botaoEstado = HIGH;
      return botaoEstado;
    }
  }
}
