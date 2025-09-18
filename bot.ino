#define led1 9
#define led2 11
#define bot1 5
#define bot2 4

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(bot1, INPUT_PULLUP);
  pinMode(bot2, INPUT_PULLUP);
  digitalWrite(led1, 255);
  digitalWrite(led2, 0);
}

void loop(){
  int i=0;
  
  if(digitalRead(bot1)==0 && digitalRead(led1)==0){
    for(i=0; i<= 100; i++){
      int cor1= map(i, 0, 100, 0, 255);
      int cor2= map(i, 0, 100, 255, 0);
      analogWrite(led1, cor1);
      analogWrite(led2, cor2);
      delay(60);
    }
  }
  if(digitalRead(bot2)==0 && digitalRead(led2)==0){
    for(i=0; i<= 100; i++){
      int cor1= map(i, 0, 100, 255, 0);
      int cor2= map(i, 0, 100, 0, 255);
      analogWrite(led1, cor1);
      analogWrite(led2, cor2);
      delay(30);
    }
  }
}
