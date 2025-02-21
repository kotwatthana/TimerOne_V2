#include "TimerOne_V2.h"

TimerOne Timer1;              // preinstatiate

unsigned short TimerOne::pwmPeriod = 0;
unsigned char TimerOne::clockSelectBits = 0;
void (*TimerOne::isrCallback)() = TimerOne::isrDefaultUnused;

// interrupt service routine that wraps a user defined function supplied by attachInterrupt

#if defined(__AVR__)
ISR(TIMER1_OVF_vect)
{
  Timer1.isrCallback();
}

#endif

void TimerOne::isrDefaultUnused()
{
}
