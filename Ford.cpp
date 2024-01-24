#include "Ford.h"

Ford::Ford(int capacity, int consumption, int speedOnRain, int speedOnSunny, int speedOnSnow)
{
	this->capacity = capacity;
	this->consumption = consumption;
	this->speedOnRain = speedOnRain;
	this->speedOnSunny = speedOnSunny;
	this->speedOnSnow = speedOnSnow;
}

int Ford::getCapacity()
{
	return this->capacity;
}

int Ford::getConsumption()
{
	return this->consumption;
}

int Ford::getSpeedOnRain()
{
	return this->speedOnRain;
}

int Ford::getSpeedOnSunny()
{
	return this->speedOnSunny;
}

int Ford::getSpeedOnSnow()
{
	return this->speedOnSnow;
}

int Ford::getAverageSpeed()
{
	int average = int((speedOnRain + speedOnSnow + speedOnSunny) / 3);
	return average;
}

std::string Ford::getCarModel()
{
	return "Ford";
}

