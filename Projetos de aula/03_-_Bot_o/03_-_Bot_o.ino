/*
   Botão para acionar LED
*/
//Declarar as variáveis de controle
int v_botao  = 2;
int v_ledRed = 13;
String v_situacao;

//Declarar a variável de estado do botão
int v_estado;

void setup() {
  Serial.begin(9600);
  pinMode(v_botao, INPUT);
  pinMode(v_ledRed, OUTPUT);
}

void loop() {
  //Leitura do estado do botão
  v_estado = digitalRead(v_botao);

  //Validação
  if (v_estado == HIGH){
    //Acender o LED
    digitalWrite(v_ledRed, HIGH);    
    v_situacao = "LED ligado :)";
  }else{
    //Apagar o LED
    digitalWrite(v_ledRed, LOW);
    v_situacao = "LED desligado :(";
  }
  Serial.println(v_situacao);//Mostrando o resultado na Serial
  delay(1000);
}
