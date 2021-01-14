#include <iostream>
using namespace std;

class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void init_counter()
    {
        counter = 0;
    }
    void set_price();
    void display_price();
};

void shop::set_price()
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter Price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop::display_price()
{
    for (int i = 0; i < counter; i++)
        cout << "The Price of item with Id " << item_id[i] << " is " << item_price[i] << endl;
}
int main()
{
    shop dukaan;
    dukaan.init_counter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();
    return 0;
}