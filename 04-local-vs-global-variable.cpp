#include <iostream>
using namespace std;
/*
Here, "a" is global and local variable but precedence is given to local variable.
Time= O(1), Space= O(1).
*/
int a = 6; // global variable.

void temp()
{
    cout << "temp function a = " << a << endl; // Here, a is global.
}

int main()
{
    int a = 2; // Local variable.
    a = 78;
    temp();
    cout << "main function a = " << a << endl; // Here, a is local.
    return 0;
}