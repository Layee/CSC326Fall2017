//Program to demonstrate that an array variable is a kind of pointer variable.
#include <iostream>
using std::cout;
using std::endl;

//typedef int* IntPtr;

int main( )
{
    int * p;
    int a[10];
    int index;

    for (index = 0; index < 10; index++)
        a[index] = index;

    p = a;

    for (index = 0; index < 10; index++)
        cout << p[index] << " ";
    cout << endl;

    for (index = 0; index < 10; index++)
        p[index] = p[index] + 1;

    for (index = 0; index < 10; index++)
        cout << a[index] << " ";
    cout << endl;

    return 0;
}
/*
0 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
Press any key to continue . . .

*/