#include <iostream>
using namespace std;
/*
Properties of friend function:-
1) Not in the scope of class.
2) Since it is not in the scope of the class, it cannot be called from the object of that class.(i.e. c1.sum_complex() = Invalid).
3) Can be invoked without the help of any object.
4) Usually contains the objects argument.
5) Can be declared inside public or private section part of the class.
6) It cannot access the members directly by the their names and need object_name.member_name to access any member.
*/
class complex
{
    int a, b;

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print_number()
    {
        cout << "Your number is " << a << " + " << b << "i"
             << "\n";
    }
    // Below line means that sum_complex(non-member) function is allowed to do anything with complex class private members.
    friend complex sum_complex(complex o1, complex o2);
};
complex sum_complex(complex o1, complex o2)
{
    complex o3;
    o3.set_number((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.set_number(1, 4);
    c2.set_number(5, 8);
    c1.print_number();
    c2.print_number();

    sum = sum_complex(c1, c2);
    sum.print_number();
    return 0;
}
