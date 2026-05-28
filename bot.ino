#define led1 10   
#define led2 11  
#define led3 6   
#define led4 5 

#define bot12 9
#define bot34 3

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(bot12, INPUT_PULLUP);
  pinMode(bot34, INPUT_PULLUP);
  digitalWrite(led1, 255);
  digitalWrite(led2, 255);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}

void loop(){
  int i=0;
  
  if(digitalRead(bot12)==0 && digitalRead(led1)==0){
    for(i=0; i<= 100; i++){
      int cor1= map(i, 0, 100, 0, 255);
      int cor2= map(i, 0, 100, 255, 0);
      analogWrite(led1, cor1);
      analogWrite(led2, cor1);
      analogWrite(led3, cor2);
      analogWrite(led4, cor2);
      delay(60);
    }
  }
  if(digitalRead(bot34)==0 && digitalRead(led3)==0){
    for(i=0; i<= 100; i++){
      int cor1= map(i, 0, 100, 255, 0);
      int cor2= map(i, 0, 100, 0, 255);
      analogWrite(led1, cor1);
      analogWrite(led2, cor1);
      analogWrite(led3, cor2);
      analogWrite(led4, cor2);
      delay(30);
    }
  }
}
