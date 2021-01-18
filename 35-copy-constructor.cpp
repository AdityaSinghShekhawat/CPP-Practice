#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // When no copy constructur is found, compiler supplies its own copy constructor.
    // number(number &obj)
    // {
    //     cout << "Copy constructor called.\n";
    //     a = obj.a;
    // }
    void display()
    {
        cout << "The number for this object is " << a << ".\n";
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(z); // This is calling copy constructor ie making copy of object z.
    z1.display();
    z2 = z; // Copy constructor will not be invoked.
    z2.display();
    number z3 = z; // Copy constructor will be invoked.
    z3.display();
    return 0;
}