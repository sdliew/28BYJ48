/* UNO Digital pins
 *  D0 is also a serial receive pin
 *  D1 is also a serial transmit pin
 *  D2 is an interrup pin INT0
 *  D3 is another interrup pin INT1
 *  D4 is a digital pin
 *  D5 is a digital pin and supports PWM
 *  D6 is a digital pin and supports PWM
 *  D7 is a digital pin
 */
#include "28BYJ48.h"

#define pin1 4  /* Digital pins D4 connects to */
#define pin2 5
#define pin3 6
#define pin4 7

BYJ48 motor = BYJ48(pin1, pin2, pin3, pin4);

void setup() {
  motor.begin();
  motor.Stop();
}

void loop() {

//  motor.FullStep(23);    /* 23 mSec delay is about 1 minute per round */ 
  motor.HalfStep(40); 
}
