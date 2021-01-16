#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }

    void print_number()
    {
        cout << "Your number is " << a << " + " << b << "i."
             << "\n";
    }
};

int main()
{
    complex c1(4, 6);
    complex c2(5);
    complex c3;
    c1.print_number();
    c2.print_number();
    c3.print_number();
    return 0;
}