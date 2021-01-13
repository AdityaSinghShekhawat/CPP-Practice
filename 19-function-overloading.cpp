#include <iostream>
using namespace std;

// C++ compiler automatically detects "sum" with two or three arguments.--> Function Overloading.
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(3, 6) << endl;
    cout << sum(3, 6, 45) << endl;
    return 0;
}