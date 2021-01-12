#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter value of num1: \n"; // '<<' is Insertion operator.
    cin >> num1;
    cout << "Enter value of num2: \n"; // '>>' is Extraction operator.
    cin >> num2;
    cout << "Sum: " << num1 + num2;
    return 0;
}
