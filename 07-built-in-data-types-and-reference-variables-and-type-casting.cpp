#include <iostream>
using namespace std;

int c = 45;

int main()
{
    // Built-in Data Types
    int a, b, c;
    cout << "Enter value of a:" << endl;
    cin >> a;
    cout << "Enter value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl; // Here, due to scope resolution operator "::" we can access global variable.

    float d = 34.4;
    long double e = 34.4;
    cout << "Size = " << sizeof(d) << endl;
    cout << "Size = " << sizeof(e) << endl;

    // Reference Variables.
    float x = 455;
    float &y = x;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Type Casting.
    int q = 45;
    cout << "The value and size of int q is " << q << " and " << sizeof(q) << endl;
    cout << "The value and size of (float)q is " << (float)q << " and " << sizeof((double)q) << endl;
    return 0;
}
