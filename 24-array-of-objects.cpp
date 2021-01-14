#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void set_id()
    {
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void get_id()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].set_id();
        fb[i].get_id();
    }

    return 0;
}