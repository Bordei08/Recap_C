#include "Audi.h"

Audi::Audi(int capacity, int consumption, int speedOnRain, int speedOnSunny, int speedOnSnow)
{
	this->capacity = capacity;
	this->consumption = consumption;
	this->speedOnRain = speedOnRain;
	this->speedOnSunny = speedOnSunny;
	this->speedOnSnow = speedOnSnow;
}


int Audi::getCapacity()
{
	return this->capacity;
}

int Audi::getConsumption()
{
	return this->consumption;
}

int Audi::getSpeedOnRain()
{
	return this->speedOnRain;
}

int Audi::getSpeedOnSunny()
{
	return this->speedOnSunny;
}

int Audi::getSpeedOnSnow()
{
	return this->speedOnSnow;
}

int Audi::getAverageSpeed()
{
	int average = int((speedOnRain + speedOnSnow + speedOnSunny) / 3);
	return average;
}

std::string Audi::getCarModel()
{
	return "Audi";
}
