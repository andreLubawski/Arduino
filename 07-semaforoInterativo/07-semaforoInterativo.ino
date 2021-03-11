/*Autor: André Lubawski
 *Data: 11/03/2021
 * 
 * Esse projeto mostra um semáforo que possui um botão para que pedestres
 * solicitem a travessia da rua.
 * 
 * O programa inicia com verde para os carros e vermelho para os pedestres
 * Quando o botão de pedestre for pressionado, será verificado se já fazem
 * mais do que 5 segundos desde que o semáforo foi modificado, para permitir
 * uma maior fluidez no trânsito.
 * 
 */
int tempoDeAtravessia = 5000;  // tempo de atravessia para os pedestres
unsigned long tempoModificacao; // tempo desde que o semáforo foi alterado pela última vez
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT); //botao

  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);

}

void loop() {
  int estadoAtual = digitalRead(2);// utilizado para a verificação do tempo desde a última utilização do botão

  if(estadoAtual == HIGH && (millis() - tempoModificacao) > 5000){
    mudeAsLuzes();
  }
  /*
   * ou seja, se o botão esta pressionado, e o tempo desde o início de execução menos o tempo desde a última
   * alteração do estado dos semáforos for maior que 5 segundos, então, a função para acender a luz verde
   * para os pedestres é acionada.
   */  
}

//######################### função mudeAsLuzes ###########################

void mudeAsLuzes(){
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(3000);

  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);

  digitalWrite(9, LOW);
  digitalWrite(8, HIGH); //o verde para os pedestres é ligado
  delay(tempoDeAtravessia);

  /*#####################################################################################
   * o verde dos pedestres piscará para evitar falta de atenção deles durante a atravessia
   */
  for(int x = 0; x < 10; x++){
    digitalWrite(8, HIGH);
    delay(350);
    digitalWrite(8, LOW);
    delay(250);
  }
  //o vermelho para os pedestres será novamente ligado
  digitalWrite(9, HIGH);
  delay(500);

  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

  tempoModificacao = millis();
}
