#include <iostream>
using namespace std;
class c2;
class c1
{
    int value1;

public:
    void input_data(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout << value1;
    }
    friend void swap(c1 &, c2 &);
};
class c2
{
    int value2;

public:
    void input_data(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout << value2;
    }
    friend void swap(c1 &, c2 &);
};

void swap(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.input_data(34);
    o2.input_data(67);
    cout << "Before swapping: ";
    o1.display();
    cout << ", ";
    o2.display();
    cout << "\n";
    swap(o1, o2);
    cout << "After swapping: ";
    o1.display();
    cout << ", ";
    o2.display();
    cout << "\n";
    return 0;
}