#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) //-----> This is Parametrized Constructor 
    {
        a = x;
        b = y;
    }
    void print_number(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Implicit Call 
    Complex obj1(4,6);

    // Explict Call 
    Complex obj2 = Complex(5,7);
    obj1.print_number();
    obj2.print_number();
}