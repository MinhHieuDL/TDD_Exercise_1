#include "Ex_class.h"

void Blinker::Execute(unsigned onTime_in_ms, unsigned offTime_in_ms, unsigned numberOfTime)
{
	for (unsigned int i = 0; i < 5; i++)
	{
		pBL->TurnOn();
	}
}

void Blinker::Tick1ms()
{

}

void Blinker::AttachLedHAL(Iled * pLed)
{
	pBL = pLed;
}
