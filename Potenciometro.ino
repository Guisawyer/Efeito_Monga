#define Led1 10		// Define a variavel Led1 a porta digital 10 (PWM)
#define Led2 11		// Define a variavel Led2 a porta digital 11 (PWM)
#define Led3 6		// Define a variavel Led1 a porta digital 6  (PWM)
#define Led4 5		// Define a variavel Led2 a porta digital 5  (PWM)

void setup() {
  pinMode(Led1, OUTPUT);		// Declara a porta do Led1 como sendo saida
  pinMode(Led2, OUTPUT);		// Declara a porta do Led2 como sendo saida
  pinMode(Led3, OUTPUT);		// Declara a porta do Led3 como sendo saida
  pinMode(Led4, OUTPUT);		// Declara a porta do Led4 como sendo saida
}

void loop() {
  int valor = analogRead(A0);		// Faz a leitura do potenciometro e converte para valores de 0 a 255          
  int Int_Led12  = map(valor, 0, 1023, 0, 255);		// Define e atualiza a variavel de intensidade do Led1 e Led2
  int Int_Led34  = map(valor, 0, 1023, 255, 0);		// Define e atualiza a variavel de intensidade do Led3 e Led4 
  analogWrite(Led1, Int_Led12);		// Acende o Led1 com uma intensidade Int_Led12
  analogWrite(Led2, Int_Led12);		// Acende o Led2 com uma intensidade Int_Led12
  analogWrite(Led3, Int_Led34);		// Acende o Led3 com uma intensidade Int_Led34
  analogWrite(Led4, Int_Led34);		// Acende o Led4 com uma intensidade Int_Led34
}
