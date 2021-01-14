#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void set_data(int a1, int b1, int c1); // Declare
    void get_data()                        // Define
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void employee::set_data(int a1, int b1, int c1) //"::" scope resolution operator.
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee aditya;
    aditya.set_data(1, 2, 4);
    // aditya.a = 123;// This will throw an error because 'a' is private member of class employee.
    aditya.d = 23;
    aditya.e = 10;
    aditya.get_data();
    return 0;
}