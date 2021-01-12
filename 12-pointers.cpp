#include <iostream>
using namespace std;

int main()
{
    // Pointer --> Data type which holds the address of other data types.
    int a = 3;
    int *b = &a; //&--> (Address of) operator. and *--> (Value at) Dereference operator.
    cout << "a = " << a << endl;
    cout << "b(Address of a) = " << b << endl;
    cout << "Value at address b = " << *b << endl;
    int **c = &b; // Pointer of pointer.
    cout << "c(Address of b) = " << c << endl;
    cout << "b(Address of a) = " << *c << endl;
    cout << "Value of a = " << **c << endl;
    return 0;
}