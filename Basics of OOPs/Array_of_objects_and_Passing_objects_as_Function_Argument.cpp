
/*
    If we have a large amount of Employee list eg;- 2000,3000 ;
        ==> So the ideal situation is to write the company name and create its array ;
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << " Enter the ID of Employee ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The ID of this Employee is " << id << endl;
    }
};

int main()
{

    // Employee b3ta , blocker , temp ,code;
    // b3ta.setid();
    // b3ta.getid();

    Employee Company[4];

    for (int i = 0; i < 4; i++) // By using the loop we can use the methods for all of the objects;
    {
        Company[i].setid();
        Company[i].getid();
    }

    return 0;
}
