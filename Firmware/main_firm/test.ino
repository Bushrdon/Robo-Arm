#include <AccelStepper.h>

//#define STEP_PIN 6
//#define DIR_PIN 7

#define ORANGE 15
#define PINK 16
#define YELLOW 17
#define BLUE 18

// Test code for unipolar and bipolar

//AccelStepper bipolar(AccelStepper::DRIVER, STEP_PIN, DIR_PIN); 
AccelStepper unipolar(8, ORANGE, YELLOW, PINK, BLUE);

void setup()
{  
//   bipolar.setMaxSpeed(1000);
//   bipolar.setSpeed(50);
   
   unipolar.setPinsInverted(true, true, true, true, false);
   unipolar.setMaxSpeed(1000);
   unipolar.setAcceleration(500); 
   unipolar.moveTo(2048);         
}

void loop() {
  
  if (unipolar.distanceToGo() == 0) {
    unipolar.moveTo(-unipolar.currentPosition()); 
  }
  unipolar.run();
}