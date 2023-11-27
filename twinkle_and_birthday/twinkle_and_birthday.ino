//Buttons to play two different tunes
int twinkle[] = {262,262,392,392,440,440,392,349,349,330,330,294,294,262};
int durtwinkle[] = {200, 200, 200, 200, 200, 200, 300, 200, 200, 200, 200, 200, 200, 300};
int happyb[] = {262,262,294,262,349,330,262,262,294,262,349,330 };
int durhappyb[] = {123,125,250,250,1000,1000,123,125,250,250,1000,1000}; 
 
const int Bzr = 7;
int sw1=8;
int sw2=3;

void setup() {
  pinMode(Bzr,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
}

void loop() {
  if(digitalRead(sw1) == HIGH){
      for(int i=0;i<14;i++){
    tone(Bzr,twinkle[i], durtwinkle[i]);  
      delay(500);
    }
   }
    if(digitalRead(sw2) == HIGH){
      for(int i=0;i<14;i++){
        tone(Bzr,happyb[i], durhappyb[i]);  
        delay(500);
      }
    }
}
