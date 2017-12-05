#ifndef _SEQUENCE
#define _SEQUENCE
template <class ItemType>
class Sequence
{

private:
	int num_used;
	int array_Capacity;
	ItemType * myarray;


public:
	Sequence();
	Sequence(const ItemType& Size);
	~Sequence();
	bool isEmpty();
	bool isFull();
	int capacity(); // return array capacity
	int Size(); // return num of element
	ItemType& front(); // return the front item in the container
	ItemType& back(); // return the back item in the container
	void push_back(const ItemType& anEntry);
	void pop_back(ItemType& anEntry);
	//ItemType At(int i);
	void resize(int newSize);
	void  insert(int i, const ItemType& anEntry);


};

#include "Sequence.cpp"
#endif
