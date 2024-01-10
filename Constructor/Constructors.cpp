
// Properties of a Constructor
/*
    ->  It should be decleared in the public section of the class.
    ->  They are actomatically invoked whenever the object is created.
    ->  Does not have returnn type< and can not return values.
    ->  It can have default arguments.
    ->  We can not refer to their address.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    // creataing a constructor
    /*
    Constructor is a special member function with same name as of the class.
    It is automatically invoked when ever an objecct is created.
    It is used to initialize the objects of its class.
    */
public:
    Complex(void); // construction declearation
    void Print_Number(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void) // This is a deffault constructor
{
    a = 10;
    b = 0;
}

int main()
{
    Complex obj1;
    obj1.Print_Number();
}
