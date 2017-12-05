#include <iostream>
#include "PlainBox.h"
using namespace std;
int main( )
{
	PlainBox p1, p2(8);
	cout << "p1:" << p1.getItem ()<<endl;
	double n=12;
	p2.setItem(n);
	cout << "p2:" << p2.getItem ()<<endl;
	p1.setItem(7);
	cout << "p1:" << p1.getItem ()<<endl;

	return 1;
}
/*
p1:-9.25596e+061
p2:12
p1:7
Press any key to continue . . .


*/