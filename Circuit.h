#pragma once
#include "Car.h"
#include <list>
#include "Weather.h"
#include <String>
#include <iostream>

class Circuit
{
private:
	std::list<Car*> cars;
	Weather weather;
	std::list<std::string> top;

public :

	void addCar(Car* newCar);
	void setWeather(Weather newWeather);
	void race();
	void showFinalRanks();

};

