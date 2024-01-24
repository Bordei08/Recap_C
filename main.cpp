#include <iostream>
#include "NumberLIst.h"
#include "Math.h"
#include "Number.h"
#include "Dacia.h"
#include "Audi.h"
#include "Ford.h"
#include "Circuit.h"


void showNumberList();
void showMath();
void showNumber();
void showCars();


int main()
{
    std::cout << "----------NumberList :" << '\n';
    showNumberList();
    std::cout << "----------Math : " << '\n';
    showMath();
    std::cout << "----------Number :" << '\n';
    showNumber();
    std::cout << "----------Cars" << '\n';
    showCars();
    return 0;
}


void showNumberList() {
    NumberList x;
    x.addInBack(10);
    x.addInFront(9);
    x.print();
    x.addInFront(12);
    x.print();
    x.sort();
    x.print();
    x.remove(13);
    x.remove(10);
    x.print();
    NumberList y({ 12,34,56,100,23 }, 5);
    y.print();
    y.sort();
    y.print();
}


void showMath() {
    Math math;
    std::cout << math.Add("Gabi", "Bordei") << '\n';
    std::cout << math.Add(4, 12, 34, 56, 78) << '\n';

}

void showNumber() {
    Number number1(10);
    Number number2(12);

    std::cout << (number1 + number2).getValue() << '\n';
    std::cout << number1.getValue() << '\n';
    std::cout << "++number1 = " << (++number1).getValue() << '\n';
    std::cout << number1.getValue() << '\n';
    std::cout << "number1++ = " << (number1++).getValue() << '\n';
    std::cout << number1.getValue() << '\n';
    std::cout << (number1 * number2).getValue() << '\n';
    std::cout<< "number1 == number2 is " << ((number1 == number2) ? "True" : "False") << '\n';
    Number number3(0);
    std::cout << "Number3 is : ";
    number3.print();
    number3 = number1;
    std::cout << "number1 = number3"<< '\n';
    std::cout << "number1 == number3 is " << ((number1 == number3) ? "True" : "False") << '\n';
}

void showCars() {
    Dacia* dacia = new Dacia(50, 2, 70, 80, 45);
    std::cout << "Dacia average spped : " << dacia->getAverageSpeed() << '\n';
    Audi* audi = new Audi(60, 6, 90, 120, 55);
    std::cout <<"Audi average speed :" << audi->getAverageSpeed() << '\n';
    Ford* ford = new Ford(55, 5, 100, 100, 40);
    std::cout << "Ford average speed :" << ford->getAverageSpeed() << '\n';
    Circuit circuit;
    circuit.addCar(dacia);
    circuit.addCar(audi);
    circuit.addCar(ford);
    circuit.setWeather(Weather::Rain);
    circuit.race();
    circuit.showFinalRanks();
    circuit.setWeather(Weather::Sunny);
    circuit.race();
    circuit.showFinalRanks();
    circuit.setWeather(Weather::Snow);
    circuit.race();
    circuit.showFinalRanks();

}