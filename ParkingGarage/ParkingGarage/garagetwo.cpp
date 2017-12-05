#include "garageTwo.h"


   template<class ItemType>
garageTwo<ItemType>::garageTwo()
{
}

template<class ItemType>
garageTwo<ItemType>::~garageTwo()
{
}

template <class ItemType>
void garageTwo<ItemType>::arrival(string License) {
	if (lane1.isEmpty() == true) {
		lane1.push(testing[0].License);

	}
			 

}

template <class ItemType>
void garageTwo<ItemType>::departure(string License) {


}



//template <class ItemType>
//bool garageTwo<ItemType>::isFull() {
//
//}
//
//template <class ItemType>
//bool garageTwo<ItemType>::isEmpty() {
//
//}
