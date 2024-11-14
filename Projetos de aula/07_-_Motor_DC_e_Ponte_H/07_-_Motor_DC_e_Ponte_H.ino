/*
  Professor Marcos Costa
  Acionamento de dois motores com ponte H L293D
*/


//Contantes da ponte H que ligam o motor
const int acti=13;
const int in1=11;
const int in2=9;
const int in3=6;
const int in4=7;

void setup()
{
  //Configurando os pinos
  pinMode(acti, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  //Acionando a ponte H
  digitalWrite(acti, HIGH);
}

void loop ()
{
  //Movimento para frente
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000); 
  
  //Parando os motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000); 
  
  //Movimento para trás
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000); 
  
  //Parando os motores novamente
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
  delay(2000); 
 
}
