#pragma once
#include "Car.h"
class Audi :
    public Car
{
private:
    int capacity;
    int consumption;
    int speedOnRain;
    int speedOnSunny;
    int speedOnSnow;
public:

    Audi(int capacity, int consumption, int speedOnRain, int speedOnSunny, int speedOnSnow);

    int getCapacity();
    int getConsumption();
    int getSpeedOnRain();
    int getSpeedOnSunny();
    int getSpeedOnSnow();
    int getAverageSpeed();
    std::string getCarModel();
};

