/*
  Semáforo interativo com ação do pedestre
*/

//Constantes referentes aos semafóros
const int carroVermelho = 12;
const int carroAmarelo  = 11;
const int carroVerde    = 10;
const int pedVermelho   = 8;
const int pedVerde      = 9;
const int botao         = 2;

//Variáveis referentes a tempo e estado do semáforo
int tempoTravessia      = 5000;
int estado              = 0;
long changeTime;

void setup() {
  //Tipando as pinagens
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(pedVerde, OUTPUT);
  pinMode(botao, INPUT); 
  
  //Iniciliazação da comunicação serial
  Serial.begin(9600); 
}

void loop(){
  int state = digitalRead(botao);  

  digitalWrite(carroVerde, HIGH);
  digitalWrite(pedVermelho, HIGH);

  if (state == HIGH && (millis() - changeTime) > 5000){
    Serial.println("AGUARDE! Fechando semaforo para os carros.");
    changeLights();
    estado = 0;
  }else{
    if (estado == 0){
      Serial.println("Semaforo aberto para os carros e fechado para pedestre");
        estado = 1;
    }
  }

}

void changeLights() {
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  delay(2000);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  delay(1000);
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, HIGH);
  Serial.println("Pedestre, pode atravessar!");
  delay(tempoTravessia);
  
  for(int x = 10; x >= 1; x--){
    Serial.println("ATENCAO, o semaforo do pedestre fechara em " + (String)x + " segundos");
    digitalWrite (pedVerde, HIGH);
    delay(500);
    digitalWrite (pedVerde, LOW);
    delay(500);    
  }
  
  digitalWrite(pedVermelho, HIGH);
  delay(500);
  digitalWrite(carroVermelho, LOW);
  delay(1000);
  digitalWrite(carroVerde, HIGH);
  changeTime = millis();  
}
