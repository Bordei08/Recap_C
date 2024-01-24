#pragma once

#include <iostream>

class Number
{
private:
	int value;
public:

	Number(int value);

	Number operator+(const Number& number) const;
	Number operator-(const Number& number) const;
	Number& operator ++();
	Number operator++(int);
	int operator[](int);
	Number operator=(const Number otherNumber);
	bool operator==(const Number& number) const ;
	friend Number operator *(const Number& number1, const Number& number2);
	friend Number operator/(const Number& number1, const Number& number2);

	void print();
	int getDigitsCount();
	int getValue()const;
	int getValue();

};

