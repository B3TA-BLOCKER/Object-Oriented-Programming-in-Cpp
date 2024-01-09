#include <iostream>
using namespace std;

class complex_num
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdataBysum(complex_num obj1, complex_num obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void print_num(void)
    {
        cout << "Your Complex number is " << a << " + " <<b<<"i"<< endl;
    }
};

int main()
{
    complex_num c1, c2, c3;
    c1.setdata(1, 2);
    c1.print_num();

    c2.setdata(3, 4);
    c2.print_num();

    c3.setdataBysum(c1, c2);
    c3.print_num();
}