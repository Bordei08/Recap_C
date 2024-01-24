#include "Dacia.h"

Dacia::Dacia(int capacity, int consumption, int speedOnRain, int speedOnSunny, int speedOnSnow)
{
	this->capacity = capacity;
	this->consumption = consumption;
	this->speedOnRain = speedOnRain;
	this->speedOnSunny = speedOnSunny;
	this->speedOnSnow = speedOnSnow;
}

int Dacia::getCapacity()
{
	return this->capacity;
}

int Dacia::getConsumption()
{
	return this->consumption;
}

int Dacia::getSpeedOnRain()
{
	return this->speedOnRain;
}

int Dacia::getSpeedOnSunny()
{
	return this->speedOnSunny;
}

int Dacia::getSpeedOnSnow()
{
	return this->speedOnSnow;
}

int Dacia::getAverageSpeed()
{
	int average = int((speedOnRain + speedOnSnow + speedOnSunny) / 3);
	return average;
}

std::string Dacia::getCarModel()
{
	return "Dacia";
}



