#include "NumberList.h"

NumberList::NumberList()
{
	this->count = 0;
	numbers = {};
}


NumberList::NumberList(std::list<int> numbers, int count)
{
	this->numbers = numbers;
	this->count = count;
}

void NumberList::remove(int val)
{
	auto it = std::find(numbers.begin(), numbers.end(), val);
	if (it != numbers.end()) {
		numbers.erase(it);
		count--;
	}
	else {
		std::cout << "Does exista a number with value = " << val << " in ListNumber." << '\n';
	}
}

void NumberList::addInFront(int x)
{
	auto it = numbers.begin();
	numbers.insert(it, x);
	count++;
}

void NumberList::addInBack(int x)
{
	numbers.push_back(x);
	count++;
}

void NumberList::sort()
{
	numbers.sort();
}

void NumberList::print()
{
	for (auto it : numbers) {
		std::cout << it << " ";
	}
	std::cout << '\n';
}

int NumberList::getCount()
{
	return this->count;
}
