#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num <= 1)
        return 1;
    return num * factorial(num - 1);
}

int fibonacci(int num)
{
    if (num <= 1)
        return 1;
    return (fibonacci(num - 1) + fibonacci(num - 2));
}

int main()
{
    // int num;
    // cout << "Number = ";
    // cin >> num;
    // cout << "Factorial = " << factorial(num) << endl;

    int fibonacci_nth_term;
    cout << "n'th term = ";
    cin >> fibonacci_nth_term;
    cout << "Fibonacci n'th term = " << fibonacci(fibonacci_nth_term) << endl;
    return 0;
}