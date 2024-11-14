/*
  Trabalhando com sensor ultrassônico
*/

const int PinoTrigger = 13;   //O Trigger emite o pulso
const int PinoEcho = 12;      //O Echo recebe o pulso

int duracao;   //Armazenamento do valor lido
int distancia; //Distância calculada

void setup () {
  pinMode(PinoTrigger,OUTPUT);
  pinMode(PinoEcho,INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(PinoTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(PinoTrigger,LOW);
  
  duracao = pulseIn(PinoEcho, HIGH); //Armazena o valor lido
  distancia = duracao*0.017175; //Calculo de tempo em distância
  Serial.print(distancia);
  Serial.println("cm");  
  delay(100);
}
