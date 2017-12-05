#include "Sequence.h"
template<class ItemType>
Sequence<ItemType>::Sequence() {

	myarray = new ItemType[10];
	num_used = 0;

}




template<class ItemType>
Sequence<ItemType>::Sequence(const ItemType& Size) : {
	myarray = new ItemType[Size];
	num_used = 0;
}








// check if the container is empty
template<class ItemType>
bool Sequence<ItemType>::isEmpty() {
	if (nume_used == 0) {
		return true;
	}
	else {
		return false;
	}
}



// check if the container is full
template <class ItemType>
bool Sequence<ItemType>::isFull() {
	if (num_used == array_Capacity) {
		return true;
	}
	else {
		return false;
	}
}



// Return the total element being used
template<class ItemType>
int Sequence<ItemType>::Size() {
	return num_used;
}


// Return array capacity
template<class ItemType>
int Sequence<ItemType>::capacity() {
	int itemSize;
	for (int i = 0; i < array_Capacity; i++) {
		itemSize = sizeof(myarray) / sizeof(myarray[0]); // return the size of the array
	}
	return itemSize;
}


// Return a reference to the first items in the container
template<class ItemType>
ItemType& Sequence<ItemType>::front() {}

// Return a reference of the last item in the container
template<class ItemType>
ItemType& Sequence <ItemType>::back() {}


// Push item of the back of the array
template <class ItemType>
void Sequence<ItemType>::push_back(const ItemType& anEntry) {

}

// remove item from the back of the container
template<class ItemType>
void Sequence<ItemType>::pop_back(ItemType& anEntry) {}



/*
template<class ItemType>
ItemType& Sequence<ItemType>::At(int i) {

}

*/



// create new size
template <class ItemType>
void Sequence<ItemType>::resize(int newSize) {}



template <class ItemType>
void Sequence<ItemType>::insert(int i, const ItemType& anEntry) {}


// Deconstructor - free the memory after the program executed
template<class ItemType>
Sequence<ItemType>:: ~Sequence() {
	delete[] myarray; // free the memory
}