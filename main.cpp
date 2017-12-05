#include<iostream>
#include "Sequence.h"
#include<string>

using namespace std;

int main()
{
	Sequence<int>*Ary = new Sequence<int>[10];
	int item;
	int index;
	char z;
	
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
	cout << "********Hello there welcome and please enjoy...******** " << endl;
	cout << "******************************************************* " << endl;
	cout << "*                                                     * " << endl;
	cout << "* 1) Check if full                                    * " << endl;
	cout << "* 2) Check if empty                                   * " << endl;
	cout << "* 3) Check the capacity                               * " << endl;
	cout << "* 4) Check the number of elements avilable            * " << endl;
	cout << "* 5) Check the front element                          * " << endl;
	cout << "* 6) Check the back element                           * " << endl;
	cout << "* 7) Push or Append at the end                        * " << endl;
	cout << "* 8) Pop or Remove at the end                         * " << endl;
	cout << "* 9) At retuen the reference at the entry position    * " << endl;
	cout << "* 10) Create a new size                               * " << endl;
	cout << "* 11) insert a new value                              * " << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;

int x;
	int y;
	while (true)
	{
		cout << endl;
		cout << " Enter your pick from the menu" << endl;

		cin >> x;

		cout << endl;

		switch (x)
		{
		case 1:
			if (Ary->isFull())

				cout << "Full" << endl;

			else

				cout << "Not Full" << endl;

			break;

		case 2:
			if (Ary->isEmpty())

				cout << "Empty" << endl;

			else

				cout << " not empty" << endl;

			break;

		case 3:

			cout << "Capacity :" << Ary->capacity() << endl;

			break;

		case 4:

			cout << "Number of elements " << Ary->getNumberOfElement() << endl;

			break;

		case 5:

			cout << "Front element " << Ary->front() << endl;

			break;

		case 6:

			cout << "back element " << Ary->back() << endl;

			break;

		case 7:

			int a;

			cout << " select which element you would like to push back " << endl;

			cin >> a;
			Ary->push_back(a);

			break;

		case 8:

			cout << "the pop back element is " << endl;
			Ary->pop_back(a);

			break;
		case 9:

			cout << "Please enter index to find element:";

			cin >> y;

			cout << "element in array at index " << y << " is : " << Ary->at(y) << endl;

			break;

		case 10:

			int resize;

			cout << "Please enter new size:";

			cin >> resize;

			Ary->resize(resize);

			break;

	case 11:

			cout << "Please enter index and item to insert element:";

			cin >> index>> item;

			Ary->insert(item, index);

			break;

		default:

			cout << "Please enter a valid choice" << endl;

			break;

		}

		char ch;

		cout << "Want to continue pres y:";

		cin >> ch;

		if (ch != 'y')

			break;
	}

	system("pause");
	return 0;

}