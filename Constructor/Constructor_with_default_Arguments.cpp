#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9) // (int b=9)---> means Giving a default value;
    {
        data1 = a;
        data2 = b;
    }
    void print_data(void);
};

void simple::print_data(void)
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}
int main()
{
    simple s(1, 4);
    s.print_data();

    // If we give single argument
    simple s2(5);
    s2.print_data();

    return 0;
}