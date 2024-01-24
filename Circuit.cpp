#include "Circuit.h"

void Circuit::addCar(Car* newCar)
{
	cars.push_back(newCar);
}

void Circuit::setWeather(Weather newWeather)
{
	this->weather = newWeather;
}

void Circuit::race()
{
	switch (weather) {
	case Rain :
		cars.sort([]( Car* car1,  Car* car2) {
			return car1->getSpeedOnRain() > car2->getSpeedOnRain(); });
		break;
	case Sunny:
		cars.sort([](Car* car1, Car* car2) {
			return car1->getSpeedOnSunny() > car2->getSpeedOnSunny(); });
		break;
	case Snow:
		cars.sort([](Car* car1, Car* car2) {
			return car1->getSpeedOnSnow() > car2->getSpeedOnSnow(); });
		break;
	}
	top.clear();
	for (auto it : cars) {
		top.push_back(it->getCarModel());
	}
}

void Circuit::showFinalRanks()
{
	std::cout << "Top for weather = " << (weather < 1 ? "Rain" : (weather == 1 ? "Sunny" : "Snow")) << " : ";
	for (auto it : top)
		std::cout << it << " ";
	std::cout << '\n';
}
