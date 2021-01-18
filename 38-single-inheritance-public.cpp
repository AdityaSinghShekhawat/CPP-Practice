#include <iostream>
using namespace std;

class base
{
    int data1; // Private by default and is not inheritable.

public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};

void base::set_data()
{
    data1 = 10;
    data2 = 20;
}

int base::get_data1()
{
    return data1;
}

int base::get_data2()
{
    return data2;
}

class derived : public base // Class "base" is being derived publically.
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * get_data1();
}

void derived::display()
{
    cout << "Value of data 1 is " << get_data1() << "\n"; // "data1" is called from function "get_data1()" because "data1" is private member of "base" class and we can't access private members of "base" class from any other class like "derived" class.
    cout << "Value of data 2 is " << data2 << "\n";
    cout << "Value of data 3 is " << data3 << "\n";
}

int main()
{
    derived der;
    der.set_data();
    der.process();
    der.display();
    return 0;
}