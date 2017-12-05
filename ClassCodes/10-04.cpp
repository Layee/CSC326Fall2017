//Program to demonstrate the way call-by-value parameters
//behave with pointer arguments.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

typedef int* IntPointer;

void sneaky(int* temp);

int main( )
{
    IntPointer p;

    p = new int;
    *p = 77;
    cout << "Before call to function *p == " 
         << *p << endl;

    sneaky(p);

    cout << "After call to function *p == " 
         << *p << endl;

    return 0;
}

void sneaky(int* temp)
{
    *temp = 99;
    cout << "Inside function call *temp == "
         << *temp << endl;
}

/*
Before call to function *p == 77
Inside function call *temp == 99
After call to function *p == 99
Press any key to continue . . .
*/



