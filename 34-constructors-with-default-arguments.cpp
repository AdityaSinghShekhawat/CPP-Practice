#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int x, int y = 0)
    {
        data1 = x;
        data2 = y;
    }
    void print_number()
    {
        cout << "Your data is " << data1 << " and " << data2 << "."
             << "\n";
    }
};
int main()
{
    simple s1(1, 2);
    s1.print_number();
    simple s2(10);
    s2.print_number();
    return 0;
}