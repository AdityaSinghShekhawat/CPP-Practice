#include <iostream>
using namespace std;

// User defined data types.
// 1. struct
struct employee
{
    int e_id;
    char fav_char;
    float salary;
};

// 2. union-->for better memory managment.
union money
{
    int rice;
    char car;
    float rupees;
};

int main()
{
    // struct employee aditya;
    // aditya.e_id = 1;
    // aditya.fav_char = 'A';
    // aditya.salary = 4000000;
    // cout << "The value is " << aditya.e_id << endl;
    // cout << "The value is " << aditya.fav_char << endl;
    // cout << "The value is " << aditya.salary << endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'C'; // Due to this we will get garbage value.
    // cout << m1.rice;

    //3. enum
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = breakfast;
    cout << m1;

    return 0;
}