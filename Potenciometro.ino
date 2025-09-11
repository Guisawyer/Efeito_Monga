#define led1 9   
#define led2 11  

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);               
  int cor1  = map(valor, 0, 1023, 0, 255);   
  int cor2  = map(valor, 0, 1023, 255, 0);   
  analogWrite(led1, cor1);
  analogWrite(led2, cor2);
}
