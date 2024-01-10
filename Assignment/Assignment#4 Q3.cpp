/*  Create a structure called employee that contains two 
members: an employee number (type int) and the employee’s
compensation (in dollars; type float). Ask the user to fill in 
this data for three employees, store it in three variables of 
type struct employee, and then display the information for each
employee.  */

#include<iostream>
using namespace std;
struct employee
{
    int number;
    float compensation;
};
int main(){
    employee ali,ahmad,bashir;

    cout<<"Enter the Details For Ali "<<endl;
    cout<<"Enter the employee number ";
    cin>>ali.number;
    cout<<"Enter The compensation "<<endl;
    cin>> ali.compensation;

    cout<<endl<<endl;
    cout<<"Enter the Details For Ahmad "<<endl;
    cout<<"Enter the employee number ";
    cin>>ahmad.number;
    cout<<"Enter The compensation "<<endl;
    cin>> ahmad.compensation;

    cout<<endl<<endl;
    cout<<"Enter the Details For Bashir "<<endl;
    cout<<"Enter the employee number ";
    cin>>bashir.number;
    cout<<"Enter The compensation "<<endl;
    cin>> bashir.compensation;

    cout<<endl<<endl<<endl;
    cout<<endl<<endl<<"The employee number of Ali is "<<ali.number<<endl<<"The employee number of Ahmad is "<<ahmad.number<<endl<<"The employee number of Bashir is  "<<bashir.number <<endl;
    cout<<endl<<endl<<"The Compansation of Ali is $"<<ali.compensation<<endl<<"The Compansation of Ahmad is $"<<ahmad.compensation<<endl<<"The Compansation of Bashir is $"<<bashir.compensation<<endl;

    return 0;

}
