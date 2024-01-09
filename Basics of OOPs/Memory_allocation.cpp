#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void DisplayPrice(void);
    void setPrice(void);
};

void Shop::setPrice(void)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Id of your item no " << counter + 1 << endl;
        cin >> itemId[counter];
        cout << "Enter Id of you item Price " << endl;
        cin >> itemPrice[counter];
        counter++;
    }
}
void Shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{

    Shop d;
    d.initcounter();
    d.setPrice();
    // d.setPrice();
    // d.setPrice();
    d.DisplayPrice();

    return 0;
}