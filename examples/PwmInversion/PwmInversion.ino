#include <TimerOne_V2.h>

#define PWM9  9
#define PWM10 10

int Dutycycle = 128; //PWM 12% / 0-100% = 0-1023
void setup(){
  pinMode(PWM9, OUTPUT);
  pinMode(PWM10, OUTPUT);

  Timer1.frequency(62.5); // frequency Khz if 100hz  = 0.1 / 62.5khz = 62.5
  Timer1.pwminversion(PWM10); // pin inversion PWM High to Low 
  Timer1.start();
  Timer1.pwm(PWM9,Dutycycle);
  Timer1.pwm(PWM10,Dutycycle);
}

void loop(){

}