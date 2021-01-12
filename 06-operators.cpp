#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:\n";
    cout << "Arithmatic Operators:\n";
    // Arithmatic Operators.
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    // Assignment Operators.--> used to assign values to variables.
    // int a =3, b = 9;
    // char d = 'A';

    cout << "\nComparision Operators:\n";
    //Comparision Operators.
    cout << "The value of (a == b) is" << (a == b) << endl;
    cout << "The value of (a != b) is" << (a != b) << endl;
    cout << "The value of (a >= b) is" << (a >= b) << endl;
    cout << "The value of (a <= b) is" << (a <= b) << endl;
    cout << "The value of (a > b) is" << (a > b) << endl;
    cout << "The value of (a < b) is" << (a < b) << endl;

    cout << "\nLogical Operators:\n";
    //Logical Operators.
    cout << "The value of logical AND ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical OR ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl;
    cout << "The value of logical NOT (!(a == b)) is " << (!(a == b)) << endl;

    return 0;
}
