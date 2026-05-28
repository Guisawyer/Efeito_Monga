#define led1 10   
#define led2 11  

#define led3 6   
#define led4 5 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);                 
  int cor1  = map(valor, 0, 1023, 0, 255);
  int cor2  = map(valor, 0, 1023, 255, 0);
  analogWrite(led1, cor1);
  analogWrite(led2, cor1);
  analogWrite(led3, cor2);
  analogWrite(led4, cor2);
}
