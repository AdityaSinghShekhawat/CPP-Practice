#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // Bydefault static variable value is initialized by '0' and cannot initialize with any other number here.

public:
    void set_data()
    {
        cout << "\nEnter the id" << endl;
        cin >> id;
        count++;
    }
    void get_data()
    {
        cout << "The id of this employee is ";
        cout << id;
        cout << " and this is employee number " << count << endl;
    }
    static void get_count() // Static member function --> which can only access static variables or static functions.
    {
        cout << "The value of count is " << count << endl;
    }
};
// Static variable which every object can use i.e. "count" won't be created individually for every object(i.e. aditya, rahul, manoj), it will be created only once.
int employee::count = 1000; // Can initialize here.

int main()
{
    employee aditya, rahul, manoj;
    aditya.set_data();
    aditya.get_data();
    employee::get_count();

    rahul.set_data();
    rahul.get_data();
    employee::get_count();

    manoj.set_data();
    manoj.get_data();
    employee::get_count();
    return 0;
}