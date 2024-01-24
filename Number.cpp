#include "Number.h"

void Number::print()
{
	std::cout << "Number  = " << this->value << '\n';
}

int Number::getDigitsCount()
{
	int numberOfDigits = 0;
	int copyValue = value;
	while (copyValue) {
		copyValue /= 10;
		numberOfDigits++;
	}
	return numberOfDigits;
}

int Number::getValue() const
{
	return this->value;
}

int Number::getValue()
{
	return this->value;
}


Number::Number(int value) : value(value) {}

Number Number::operator+(const Number& number) const
{
	int result = this->value + number.getValue();
	return Number(result);
}

Number Number::operator-(const Number& number) const
{
	int result = this->value - number.getValue();
	return Number(result);
}

Number& Number::operator++()
{
	++this->value;
	return *this;
}

Number Number::operator++(int)
{
	Number tempNumber = *this;
	++this->value;
	return tempNumber;
}

int Number::operator[](int x)
{
	return x;
}

Number Number::operator=(const Number otherNumber)
{
	//testing this->vaue != otherNumber.getValue()
	this->value = otherNumber.getValue();
	return *this;
}

bool Number::operator==(const Number& number) const
{
	return this->value == number.getValue();
}

Number operator*(const Number& number1, const Number& number2)
{
	int result = number1.getValue() * number2.getValue();
	return Number(result);
}

Number operator/(const Number& number1, const Number& number2)
{
	// testing number2.getValue != 0
	int result = number1.getValue() / number2.getValue();
	return Number(result);
}



