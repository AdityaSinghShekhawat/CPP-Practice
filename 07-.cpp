#include <iostream>
using namespace std;

int c = 45;

int main()
{
    int a, b, c;
    cout << "Enter value of a:" << endl;
    cin >> a;
    cout << "Enter value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl; // Here, due to scope resolution operator "::" we can access global variable.
    return 0;
}
