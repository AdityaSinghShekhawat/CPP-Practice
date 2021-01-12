#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // Selection Control Structure: If else-if ladder.
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You can not come to my party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are still a kid. Get Out!." << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not even born" << endl;
    // }
    // else
    // {
    //     cout << "Come homie." << endl;
    // }

    // Selection Control Structure: Switch Case.
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 18" << endl;
        break;

    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases." << endl;
        break;
    }
    return 0;
}
