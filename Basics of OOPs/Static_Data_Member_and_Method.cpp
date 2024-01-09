/*
    how we can create a variable which will be same for every
    object ????

    We dont have any way to preserve the count of number of objects created ;

    because if we declare a counter so every object will have its own counter 
    which can not be passed from an object to another;
    --> This problem is solved by "STATIC VARIABLE ";
        ==> We write the "STATIC VARIABLE " out side of the class;
            ==> To tell that the variable is associated to the class we write 
                (" int Employee :: count; ")
         ==> And we will write ( " static int count ;")
            ==> When ever we make a Static Variable there is no need of initilizing it
                with 'zero'/'0' , it is by default initiaalize with 'zero'/'0';
        ==> If we had used a normal variable so it would output 1 every time as 
            after 1 operation objects are changing.
        ==> When we make an STATIC VARIABLE it shares all the objects.
        ==> Only 1 copy is made of the static variable .
        ==> Visibility or the scope is inside the class.
        ==> Life time of the static variable is until the termination of the entire Program.

    --> If we want to start the counting from any number other than Zero;
        ==> So we have to initialize it with that number outside the class where we have declared the 
            static variable  


    ==--~~> " STATIC FUNCTION ";
        Why we need Static function ???
            ==> Static function are made when we want to create such a function which can access all 
                static variables
            ==> To access a static function we have to use scope resolution operator ;
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count ;

public:
    void setdata(void)
    {
        cout << "\nEnter the ID " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "\nThe id of the Employee is " << id<<" and this is Employee number "<<count<<endl;
    }
    static void getcount(void){ // syntax of static function;
        cout<<"The value of count is "<<count<<endl;
    }
};

    // Count is the static data member of class Employee 
int Employee :: count; // default value is 'zero'/'0'
/*  To initialize the variable with 100 we have to write 
    ( "int Employee :: count = 100 ;" )  */
int main()
{

    Employee b3tablocker, Ali , Kamal;
    b3tablocker.setdata();
    b3tablocker.getdata();
    Employee::getcount();  //  this is the way how we can access the static function;

    
    Ali.setdata();
    Ali.getdata();
    Employee::getcount();  //  this is the way how we can access the static function;

    Kamal.setdata();
    Kamal.getdata();
    Employee::getcount();  //  this is the way how we can access the static function;

    return 0;
}