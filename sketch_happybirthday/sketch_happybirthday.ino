int happyb[] = {262,262,294,262,349,330,262,262,294,262,349,330 };
int durhappyb[] = {123,125,250,250,1000,1000,123,125,250,250,1000,1000}; 

const int Bzr = 8;

void setup() {
  
pinMode(Bzr,OUTPUT);

}

void loop() {
  for(int i=0;i<14;i++){
  tone(Bzr,happyb[i], durhappyb[i]);
  delay(250);
  }
}
