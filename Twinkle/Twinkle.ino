int twinkle[] = {262,262,392,392,440,440,392,349,349,330,330,294,294,262};int durtwinkle[] = {200, 200, 200, 200, 200, 200, 300, 200, 200, 200, 200, 200, 200, 300};

const int Bzr = 8;

void setup() {
  
pinMode(Bzr,OUTPUT);

}

void loop() {
  
  for(int i=0;i<14;i++){
  tone(Bzr,twinkle[i], durtwinkle[i]);
  delay(1000);
  }
  
}
