#pragma once
#include "ArrayStack.h"
#include<string>
using namespace std;
struct Car
{
	string License;
	int counter = 0;
};


template<class ItemType>
class garageTwo
{
public:
	garageTwo();
	~garageTwo();
	void arrival(string);
	void departure(string);
	//bool isFull();
	//bool isEmpty();
private:
	ArrayStack<string> lane1,
			   lane2,
			   street;
	Car testing[5];
};
#include "garageTwo.cpp"

