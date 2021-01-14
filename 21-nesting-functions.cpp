#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read();
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nIncorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment()
{
    chk_bin(); // Nesting member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
    cout << endl;
}

void binary::display()
{
    cout << "\nDisplaying binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}