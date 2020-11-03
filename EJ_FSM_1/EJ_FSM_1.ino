#include "FSM_led.h"

#define UN_SEGUNDO   1000
#define LED_PIN      13

unsigned long millis_actual, millis_trig;

/****************************
   SETUP FUNCTION
 ***************************/
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  FSM_init(LED_PIN);
}

/****************************
   LOOP FUNCTION
 ***************************/
void loop() 
{
  // put your main code here, to run repeatedly:
  millis_actual = millis();
  if ( millis_actual > millis_trig)
  {
    millis_trig = millis_actual + UN_SEGUNDO;
    FSM_update();
    FSM_debug();
  }
}
