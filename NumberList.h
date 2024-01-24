#pragma once
#include <iostream>
#include<list>


class NumberList
{
private:
	std::list<int> numbers;
	int count;
public:

	NumberList();
	NumberList(std::list<int> numbers, int count);

	void remove(int val);
	void addInFront(int x);
	void addInBack(int x);
	void sort();
	void print();
	int getCount();
};

