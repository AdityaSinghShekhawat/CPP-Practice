#include <iostream>
using namespace std;

int main()
{
    // Array define Examples.
    // int marks[4] = {23, 45, 56, 89};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }
    // int math_marks[4];
    // math_marks[0] = 47;
    // math_marks[1] = 67;
    // math_marks[2] = 65;
    // math_marks[3] = 82;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << math_marks[i] << endl;
    // }

    //Quiz: Print array using while and do-while.
    // int marks[4] = {23, 45, 56, 89};
    // int i = 0;
    // while.
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }
    //do-while
    // do
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    // Pointers and arrays.
    int marks[4] = {23, 45, 56, 89};
    int *p = marks;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks"
             << "[" << i << "]"
             << " is " << *(p + i) << endl;
    }

    return 0;
}