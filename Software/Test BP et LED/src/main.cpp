#include <Arduino.h>
#define LED 2
#define BP1 4
// put function declarations here:
int myFunction(int, int);
int tempo = 0;
int delais = 0;
unsigned long interval = 1000;
unsigned long currentTime;
unsigned long previousTime;
bool ledStatus = LOW;
int sortie = 0;
bool  boutonStatut;

void setup() {

  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BP1, INPUT_PULLUP);


}

void loop() {
  currentTime = millis();
  if ( currentTime - previousTime >= interval && boutonStatut == 1)
  {
    previousTime = currentTime;
    ledStatus = !ledStatus;
    digitalWrite(LED, ledStatus);
    Serial.printf("Led is ");
    Serial.println(ledStatus);
    Serial.println(boutonStatut);
  }
    
  boutonStatut = digitalRead(BP1);
  
}


