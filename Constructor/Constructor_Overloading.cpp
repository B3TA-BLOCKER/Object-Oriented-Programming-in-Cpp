#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void print_number(void)
    {
        if (b != 0)
        {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
        else
        {
            cout << "Your number is " << a << endl;
        }
    }
};

int main()
{
    Complex c1(4, 6);
    c1.print_number();

    Complex c2(5);
    c2.print_number();

    Complex c3;
    c3.print_number();

    return 0;
}