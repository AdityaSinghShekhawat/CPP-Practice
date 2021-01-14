#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void set_data_by_sum(complex o1, complex o2) // Passing objects as function arguments.
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print_number()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.set_data(1, 2);
    c1.print_number();
    c2.set_data(3, 4);
    c2.print_number();
    c3.set_data_by_sum(c1, c2); // Passing objects as function arguments.
    c3.print_number();
    return 0;
}