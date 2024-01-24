#pragma once
#include <String>

class Car {
public:
	virtual int getCapacity() = 0;
	virtual int getConsumption() = 0;   
	virtual int getSpeedOnSnow() = 0;
	virtual int getSpeedOnSunny() = 0;
	virtual int getSpeedOnRain() = 0;
	virtual int getAverageSpeed() = 0;
	virtual std::string getCarModel() = 0;
};