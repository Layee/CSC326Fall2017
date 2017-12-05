#include<iostream>
#include<string>
#include<fstream>
#include "garageTwo.h"
#include "ArrayStack.h"
#include "StackInterface.h"
using namespace std;

int main() {
	char License[7];
	char A_or_D[20];
	garageTwo<int> Parking_Lot;
	fstream myfile;
	myfile.open("Parking.txt");

	if (!myfile) {
		cout << "Couldn't open the file" << endl;
	}
	else {
		cout << "file found" << endl;
	}

	for(int i = 0;!myfile.eof(); i++)
	{
		myfile >> License[i];
		if (License[i] == ' ')
			myfile >> A_or_D[i];
	}

	myfile.close(); // close the file
	system("pause");
	return 0;
}