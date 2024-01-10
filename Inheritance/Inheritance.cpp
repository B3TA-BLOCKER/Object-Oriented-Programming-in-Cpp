#include <iostream>
using namespace std;

// Base Class ;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 120;
    }
    Employee() {}
};

// Derived Class;
//  ssybtax of the Derived class ;-
/*
class derived-class name : visibility mode base-class-name
{
    methodes, members anything ...............;
};
*/
// Creting a Programmer class derived from Emloyee Base Class ;
/*
Note;-
    ==>Default visibility mode is Private in Inheritance;
    --> Private visibility mode :-
                Public member of the base class becomes private members in the derived class
    -->Public Visibility mode :-
                Public member of the base class becomes public members in the derived class
            ==> Private members can not be inheriated

*/
class Programer : public Employee
{
public:
    int language_code;
    Programer(int inpid)
    {
        id = inpid;
        language_code = 2;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
/* 
    When we create a derived class automatically the defaulut constructer of the 
    base class is called 
*/ 
// the derived class will try to call Employee default constructor
int main()
{
    Employee Ali(1), Kamran(2);

    cout << " The Salary is " << Ali.salary << endl;
    cout << " The Salary is " << Kamran.salary << endl;

    Programer skillF(10);

    cout << skillF.language_code << endl;
    cout<<skillF.id;    
    /* The above line would generate error because it is inheriated privately */
    skillF.getdata();
}