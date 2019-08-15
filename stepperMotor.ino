#include <CheapStepper.h> 


CheapStepper stepper; 

boolean moveClockwise = true; 

void setup() {
  Serial.begin(9600);
  Serial.begin("ready to start moving!");



}

void loop() {
    for (int s = 0; s < 4096; s++) {
      stepper.stepCW();

      int nStep = stepper.getStep();

      if (nStep % 64 == 0) {
        Serial.print("current step position: "); Serial.print(nStep);
        Serial.println();
        
      }
    }
    delay(1000);

    moveClockwise = !moveClockwise;
}









  
