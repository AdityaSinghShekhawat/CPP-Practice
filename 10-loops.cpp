#include <iostream>

using namespace std;

int main()
{
    /*
    Loops in C++
    1. For Loops.
    2. While Loops.
    3. Do-While Loops
    */

    // For loop.
    // for (int i = 0; i <= 100; i++)
    //     cout << i << endl;

    //Infinite for loop.
    // for (int i = 0; 23 <= 100; i++)
    //     cout << i << endl;

    // While loop
    // int i = 0;
    // while (i < 100)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Infinite While loop
    // int i = 0;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // do-while loop.--> will execute atleast once.
    // int i = 0;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i < 100);

    // infinite do-while loop.
    // int i = 0;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (true);

    // Quiz: Print 6 Table:
    for (int count = 1; count <= 10; count++)
        cout << " 6 x " << count << " = " << (6 * count) << "." << endl;

    return 0;
}
