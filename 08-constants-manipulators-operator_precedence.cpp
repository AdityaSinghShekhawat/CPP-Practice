#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants in C++. Variables which we cannot modify.
    // const int a = 3;
    // cout << "The value of a was " << a;
    // a = 45; // This will give an error( error: assignment of read-only variable 'a') because is a constant.
    // cout << "The value of a is " << a;

    // Manipulators in CPP.(like "endl")
    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a with setw is: " << setw(4) << a << endl;
    // cout << "The value of b with setw is: " << setw(4) << b << endl;
    // cout << "The value of c with setw is: " << setw(4) << c << endl;

    // Operator Precedence
    int a = 3, b = 4;
    // int c = (a * 5) + b;
    int c = ((((a * 5) + b) - 45) / 8);
    cout << c;
    return 0;
}
