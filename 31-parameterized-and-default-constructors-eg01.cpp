#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void print_number()
    {
        cout << "Your complex number is " << a << " + " << b << "i." << endl;
    }
};

complex::complex(int x, int y) // This is a parameterized constructor as it takes two parameters.
{
    a = x;
    b = y;
}

int main()
{
    complex a(4, 6); // Implicit Call.
    a.print_number();
    complex b = complex(10, 60); // Explicit Call.
    b.print_number();
    return 0;
}