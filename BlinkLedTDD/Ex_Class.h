class Iled
{
public:
	virtual void TurnOn() = 0;
	virtual void TurnOff() = 0;
};

class Blinker
{
private:
	Iled *pBL;
	unsigned int counter;
public:
	Blinker()
	{
		counter = 0;
	}

	void Execute(unsigned onTime_in_ms, unsigned offTime_in_ms, unsigned numberOfTime);
	void Stop();

	void Tick1ms();

	void AttachLedHAL(Iled * pLed);
};
