#define Led1 10		// Define a variavel Led1 a porta digital 10 (PWM)
#define Led2 11		// Define a variavel Led2 a porta digital 11 (PWM)
#define Led3 6		// Define a variavel Led3 a porta digital 6  (PWM)
#define Led4 5		// Define a variavel Led4 a porta digital 5  (PWM)

#define Bot12 9		// Define a variavel Bot12 a porta digital 9 (PWM) Controla os LEDs 1 e 2
#define Bot34 3		// Define a variavel Bot34 a porta digital 3 (PWM) Controla os LEDs 3 e 4

void setup(){
  pinMode(Led1, OUTPUT);		// Declara a porta do Led1 como sendo saida
  pinMode(Led2, OUTPUT);		// Declara a porta do Led2 como sendo saida
  pinMode(Led3, OUTPUT);		// Declara a porta do Led3 como sendo saida
  pinMode(Led4, OUTPUT);		// Declara a porta do Led4 como sendo saida
  pinMode(Bot12, INPUT_PULLUP);		// Declara a porta do Bot12 como sendo entrada
  pinMode(Bot34, INPUT_PULLUP);		// Declara a porta do Bot34 como sendo entrada
  digitalWrite(Led1, 255);		// Inicialmente o Led1 fica ligado no maximo
  digitalWrite(Led2, 255);		// Inicialmente o Led2 fica ligado no maximo
  digitalWrite(Led3, 0);		  // Inicialmente o Led3 fica apagado
  digitalWrite(Led4, 0);		  // Inicialmente o Led4 fica apagado
}

void loop(){
  int i=0;
  
  if(digitalRead(Bot12)==0 && digitalRead(Led1)==0){ // Condicoes para acender o Led1 e Led2
    for(i=0; i<= 100; i++){
      int Int_Led12= map(i, 0, 100, 0, 255);		// Define e atualiza a variavel de intensidade do Led1 e Led2
      int Int_Led34= map(i, 0, 100, 255, 0);		// Define e atualiza a variavel de intensidade do Led3 e Led4 
      analogWrite(Led1, Int_Led12);		// Acende o Led1 com uma intensidade Int_Led12
      analogWrite(Led2, Int_Led12);		// Acende o Led2 com uma intensidade Int_Led12
      analogWrite(Led3, Int_Led34);		// Acende o Led3 com uma intensidade Int_Led34
      analogWrite(Led4, Int_Led34);		// Acende o Led4 com uma intensidade Int_Led34
      delay(60);		// Delay para uma mudanca mais suave
    }
  }
  if(digitalRead(Bot34)==0 && digitalRead(Led3)==0){ // Condicoes para acender o Led3 e Led4 
    for(i=0; i<= 100; i++){
      int Int_Led12= map(i, 0, 100, 255, 0);		// Define e atualiza a variavel de intensidade do Led1 e Led2 
      int Int_Led34= map(i, 0, 100, 0, 255);		// Define e atualiza a variavel de intensidade do Led3 e Led4
      analogWrite(Led1, Int_Led12);		// Acende o Led1 com uma intensidade Int_Led12
      analogWrite(Led2, Int_Led12);		// Acende o Led2 com uma intensidade Int_Led12
      analogWrite(Led3, Int_Led34);		// Acende o Led3 com uma intensidade Int_Led34
      analogWrite(Led4, Int_Led34);		// Acende o Led4 com uma intensidade Int_Led34
      delay(30);		// Delay para uma mudanca mais suave
    }
  }
}
