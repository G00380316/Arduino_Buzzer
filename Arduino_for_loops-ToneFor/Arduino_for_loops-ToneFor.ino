
int piezoPin = 8;

void setup() {

Serial.begin(9600);
pinMode(piezoPin, OUTPUT);

}

void loop() {  
  
for(int i=10;i<4000;i++){
  tone(piezoPin, i);
  delay(100);
  noTone(piezoPin);
  }
}
