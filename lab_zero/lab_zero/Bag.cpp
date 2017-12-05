//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.
#include <iostream> // For cout and cin
#include <string>   // For string objects
#include "Bag.h"    // For ADT bag
using namespace std;

int removeItem(Bag <string> &mybag, string item);

int main()
{

	string food[] = { "Egg", "Soda", "Bread", "Orange", "Rice", "Yam" };

	Bag<string> storeBag, fragileBag;
	storeBag.add(food[0]);
	storeBag.add(food[1]);
	storeBag.add(food[2]);
	storeBag.add(food[3]);
	storeBag.add(food[4]);
	storeBag.add(food[5]);
	storeBag.add(food[6]);

	
	// Get friend�s guess and check it.
	while (storeBag.contains("Egg"))
	{
		storeBag.remove("Egg");
		fragileBag.add("Egg");
		cout << endl;
	}  

	while (storeBag.contains("Bread"))
	{
		storeBag.remove("Bread");
		fragileBag.add("Bread");
		cout << " The removed items from the bag  are: \n  ";
			   fragileBag.displayBagContent();
			   cout << endl;

			 cout << " Store Bag now contains the follow item: \n";
		     storeBag.displayBagContent();
			 cout << endl;


	}

	cout << "No more fragile item in this bag!" << endl;
	cout << endl;
	int n = removeItem(storeBag, "Soda");
	cout << n << " Item removed " << endl;
	

	
	system("pause");
	return 0;
};





int removeItem(Bag <string> &mybag, string item) {

	int count = 0;

	while (mybag.contains(item)) {
		
		mybag.remove(item);
		cout << "Item has been removed from the bag" << endl;
		count++;
		
	}
	
	
	      

	return count;

}



