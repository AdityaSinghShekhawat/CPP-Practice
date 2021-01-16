#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a constructor.
    // Constructor is a special member function with same name as of class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked(ie called) whenever an object is created.

    complex(); // Constructor declaration.
    void print_number()
    {
        cout << "Your complex number is " << a << " + " << b << "i." << endl;
    }
};

complex::complex() // This is a default constructor as it does not take any parameter.
{
    a = 0;
    b = 0;
    // cout << "Hello World"
    //      << "\n";
}

int main()
{
    complex c1, c2, c3;
    c1.print_number();
    c2.print_number();
    c3.print_number();
    return 0;
}

/*
Properties of Constructor:-

1) It should be declared in the public section of the class.
2) They are automatically invoked whenever the objects is created.
3) They cannot return values and do not have return types.(not even "void").
4) It can have default arguments.
5) We cannot refer to the address.

*/