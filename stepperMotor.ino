#include <CheapStepper.h> 


CheapStepper stepper1 (8,9,10,11); 

boolean moveClockwise = true; 

void setup() {
  Serial.begin(9600);
  Serial.begin("ready to start moving!");



}

void loop() {
    for (int s = 0; s < 4096; s++) {
      stepper1.stepCW();

      int nStep = stepper1.getStep();

      if (nStep % 64 == 0) {
        Serial.print("current step position: "); Serial.print(nStep);
        Serial.println();
        
      }
    }
    delay(1000);

    moveClockwise = !moveClockwise;
}









  
