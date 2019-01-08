#include <stdio.h>
#include <iostream>
#include "Ex_Class.h"

using namespace std;
class DemoLed : public Iled
{
	virtual void TurnOn()
	{
		printf("Led is on\n");
	}
	virtual void TurnOff()
	{
		printf("Led is off\n");
	}
};

int main(void)
{
	Blinker blinker;
	DemoLed demoLed;
	blinker.AttachLedHAL(&demoLed);

	blinker.Execute(5, 10, 10);
	while (true)
	{
		getchar();
		blinker.Tick1ms();
	}
	return 0;
}