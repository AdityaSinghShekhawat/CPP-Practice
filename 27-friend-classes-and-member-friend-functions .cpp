#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sum_real_complex(complex, complex); // Can't define here because objects(i.e. o1, o2) of complex class not yet declared.
    int sum_imaginary_complex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring functions as friends.
    // friend int calculator::sum_real_complex(complex o1, complex o2);
    // friend int calculator::sum_imaginary_complex(complex o1, complex o2);

    // Alter: Declaring the entire calculator class as friend.
    friend class calculator;

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
};
int calculator::sum_real_complex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sum_imaginary_complex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.set_number(1, 4);
    o2.set_number(5, 7);
    calculator calc;
    int res = calc.sum_real_complex(o1, o2);
    cout << "The sum of real part is " << res << "\n";
    int res_img = calc.sum_imaginary_complex(o1, o2);
    cout << "The sum of imaginary part is " << res_img << "\n";
    return 0;
}