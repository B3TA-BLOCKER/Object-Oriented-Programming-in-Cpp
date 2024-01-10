#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print_number(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    /* Below line means thhat the non member function sumComplex can do anything
        with the private attributes ;
    */
    friend Complex sumComplex(Complex obj1, Complex obj2);
};

Complex sumComplex(Complex obj1, Complex obj2)
{
    Complex o3;
    o3.set_number((obj1.a + obj2.a), (obj1.b + obj2.b));
    return o3;
}
int main(void)
{
    Complex c1, c2, sum;
    c1.set_number(1, 4);
    c2.set_number(5, 8);

    c1.print_number();
    c2.print_number();

    sum = sumComplex(c1, c2);
    sum.print_number();
}
/*
    Properties of FRIEND FUNCTION;

        -> Not in the scope of the class ;
        -> Science it is not in the scope of the class
            ==> It can not be called from the objects of that class 
                --> c1.sumcomplex()   <== it is invalid 
        -> Can be invoked without the help of any object
        -> Usually contains objects as an argument 
        -> Can be declared inside private and public section of the Class 
        -> It can not assess the members directly by their names and need 
           object_name and member name to access any member ; 
*/