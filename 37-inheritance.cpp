#include <iostream>
using namespace std;

// Base Class.
class employee
{
public:
    int id;
    float salary;
    employee() {} // This default constructor is used for inheritance.
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
};

/* 
Derived Class Synatax:-

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} // "{{}}" --> Things to be replaced.
{
    members, methods, etc...
}

Note:-
1) Visibility mode are of two types:-
    a) Private: Public members of the base class becomes private members of the derived class.
    b) Public: Public members of the base class becomes public members of the derived class.
2) Default visibility mode is private.
3) Private members of base class are never inherited.
*/
// Derived Class.
class programmer : public employee
{
public:
    int language_code;
    programmer(int inp_id)
    {
        id = inp_id;
        language_code = 9;
    }
    void get_data()
    {
        cout << id << "\n";
    }
};
int main()
{
    employee aditya(1), manoj(2);
    cout << aditya.salary << "\n";
    cout << manoj.salary << "\n";
    programmer skillF(10);
    cout << skillF.language_code << "\n";
    cout << skillF.id << "\n";
    skillF.get_data();
    return 0;
}