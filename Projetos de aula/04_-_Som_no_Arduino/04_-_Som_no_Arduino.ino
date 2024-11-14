/*
Buzzer - Notas musicais com buzzer
*/

//Notas Musicais
int DO   = 262;  //Nota Do
int RE   = 294;  //Nota Ré
int MI   = 330;  //Nota Mi
int FA   = 349;  //Nota Fa
int SOL  = 392;  //Nota Sol
int LA   = 440;  //Nota La
int SI   = 494;  //Nota Si
int DO_2 = 523;  //Nota Dó2

int pinoBuzzer = 8; //Pino do Buzzer

//Array para armazenar as notas
int melodia[] = {
  DO, RE, MI, FA, SOL, LA, SI, DO_2
// 0   1   2   3   4   5    6   7 
};

int tempo[] = {
   600, 600, 600, 600, 600, 600, 600, 600
//  0    1    2    3    4    5    6    7    
};

void setup() {
   // configura pino do buzzer como saída
  pinMode(pinoBuzzer,OUTPUT);
}
 
void loop() {
  for(int i=0 ; i<8; i++) //Estrutura for para percorrer o array
  {
    tone(pinoBuzzer, melodia[i]); //Toca de acordo com a nota    
    delay(tempo[i]); //Duração do som    
  } 

  for(int i=7 ; i>=0; i--) //Estrutura for para percorrer o array
  {
    tone(pinoBuzzer, melodia[i]); //Toca de acordo com a nota    
    delay(tempo[i]); //Duração do som    
  }  
}
