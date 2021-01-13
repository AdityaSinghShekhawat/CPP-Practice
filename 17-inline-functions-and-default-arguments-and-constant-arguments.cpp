#include <iostream>
using namespace std;

// Inline function will substitute return value in calling function in compile time. Hence saves time.
inline int product(int a, int b)
{
    // static int c = 0; // The value of c will be in static memory.
    // c += 1;
    return (a * b);
}

// Default value(factor). Also, remember to write default values after normal arguments.
float money_received(int current_money, float factor = 1.04)
{
    return current_money * factor;
}

// Constant arugument tells compiler to not change actual variable vaule.
// int strlen(const char *p)
// {

// }

int main()
{
    // int num1, num2;
    // cout << "Enter values of num1 and num2" << endl;
    // cin >> num1 >> num2;
    // cout << "num1 * num2 = " << product(num1, num2) << endl;
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << money_received(money) << " Rs after 1 year." << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << money_received(money, 1.10) << " Rs after 1 year." << endl;
    return 0;
}