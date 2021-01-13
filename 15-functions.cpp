#include <iostream>
using namespace std;

int sum(int, int); // Function prototyping i.e. declaring function if function is defined after main.

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    // num1, num2 are called actual parameters.
    cout << "Sum = " << sum(num1, num2) << endl;
    return 0;
}

// a, b are called formal parameters.
int sum(int a, int b)
{
    int c = a + b;
    return c;
}