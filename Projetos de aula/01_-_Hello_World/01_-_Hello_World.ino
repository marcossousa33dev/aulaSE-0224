/*
Piscar/Led -> "Hello World - Arduino"
Acende o Led por um segundo, e depois apaga pelo mesmo tempo,
de forma repetida.
*/

//Variável para o pino 13
int led = 13;

//Executa somente 1 vez quando o Arduino liga
void setup(){
    //Indica que o pino é de Saída
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH); //Acende o Led
    delay(1000); //Pausa de 1 segundo
    digitalWrite(led, LOW); //Apaga o Led
    delay(1000); //Pausa de 1 segundo
}
