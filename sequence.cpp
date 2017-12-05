#include "Sequence.h"

template<class ItemType>

Sequence < ItemType>::Sequence()
{
	itemCapacity = 10;

	Ary = new ItemType[10];
	
	num_used = 0;
}

template<class ItemType>
int Sequence < ItemType>::capacity()
{

	return itemCapacity;
}

template<class ItemType>
bool Sequence<ItemType>::isEmpty()
{
	return (num_used == 0);

	/*	return true;
	else
	return false;
	*/
}

template<class ItemType>
bool Sequence<ItemType>::isFull()
{
	return (num_used == itemCapacity);
/*	if (num_used == capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
	*/

}

template<class ItemType>
int Sequence<ItemType>::size()
{
	return itemCapacity;

}

template<class ItemType>
void Sequence < ItemType>::push_back(const ItemType& anEntry)
{
	if (!isFull())
	{
		Ary[num_used] = anEntry;
		num_used++;
	}
	else
	{
		cout << "arry is full" << endl;
	}
}

template<class ItemType>
void Sequence<ItemType>::pop_back(ItemType& anEntry)
{
	//if (!isEmpty())
	//{
		anEntry = Ary[num_used - 1];
		num_used--;
		

	//}
	//else
	//	cout << "arry is empty" << endl;
}

template<class ItemType>
void Sequence<ItemType>::resize(int newSize)
{
	int oldCapacity = itemCapacity;
	itemCapacity = newSize;
	ItemType*newAry = new ItemType[newSize];
	for (int i = 0; i < oldCapacity; i++)
	{
		newAry[i] = Ary[i];
	}
	Ary = newAry;
	delete[]newAry;
}

template<class ItemType>
int Sequence<ItemType>::getNumberOfElement()
{
	return num_used;

}

template<class ItemType>
ItemType Sequence<ItemType>::at(int i)
{
	
	 if (num_used < i)

	 return -1;

	 else
	 return Ary[i];
}
	


template<class ItemType>
ItemType& Sequence<ItemType>::front()
{
	return Ary[0];

}

template<class ItemType>
ItemType&  Sequence<ItemType>::back()
{
	return Ary[num_used - 1];
}

template<class ItemType>
void Sequence<ItemType>::insert(ItemType itm,int in)
{
	if (in < itemCapacity)
	{
		Ary[in] = itm;
		num_used++;
	}
	else
		cout << " Error array use is full " << endl;
}

template<class ItemType>
Sequence<ItemType>::~Sequence()
{
	delete[]Ary;
}


