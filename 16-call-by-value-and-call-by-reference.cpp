#include <iostream>
using namespace std;

// Call by value.
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Call by reference using pointers.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variables.
void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 5, num2 = 7;
    // Call by value.
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num1 + num2 = " << sum(num1, num2) << endl;
    // Call by reference using pointers.
    swap(&num1, &num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num1 + num2 = " << sum(num1, num2) << endl;
    // Call by reference using C++ reference variables.
    swap(num1, num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num1 + num2 = " << sum(num1, num2) << endl;
    return 0;
}