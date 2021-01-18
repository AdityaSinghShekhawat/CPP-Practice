#include <iostream>
using namespace std;

int main()
{
    // Break.
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << i << endl;
    }

    // Continue.
    // for (int i = 0; i < 40; i++)
    // {
    //     if (i == 2)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    return 0;
}