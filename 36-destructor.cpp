#include <iostream>
using namespace std;

//Destructor never takes an argument nor does it return any value.
int count = 0;
class num
{
public:
    num() // Constructor.
    {
        cout << "This is the time when constructor is called for object number" << ++count << ".\n";
    }
    ~num() // Destructor
    {
        cout << "This is the time when my destructor is called for object number" << count-- << ".\n";
    }
};

int main()
{
    cout << "We are inside our main function.\n";
    cout << "Creating first object n1.\n";
    num n1;
    {
        cout << "Entring this block.\n";
        cout << "Creating two more objects.\n";
        num n2, n3;
        cout << "Exiting this block.\n";
    }
    cout << "Back to main.\n";
    return 0;
}