#include <iostream>
#include<string.h>
using namespace std;

struct Employee{
 int Id;
 string Name;
 int Age;
 long Salary;
};

int main() {
    Employee E;
    cout << "\nEnter Employee Id : ";
    cin >> E.Id;
    cout << "\nEnter Employee Name : ";
    cin>>E.Name;
    cout << "\nEnter Employee Age : ";
    cin >> E.Age;
    cout << "\nEnter Employee Salary : ";
    cin >> E.Salary;
    cout << "\n\nEmployee Id : " << E.Id;
    cout << "\nEmployee Name : " << E.Name;
    cout << "\nEmployee Age : " << E.Age;
    cout << "\nEmployee Salary : " << E.Salary;

    return 0;
}