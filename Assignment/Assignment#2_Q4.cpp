/*  Create an employee class. The member data should comprise an int for 
storing the employee number and a float for storing the employee’s compensation. 
Member functions should allow the user to enter this data and display it. 
Write a main () that allows the user to enter data for three employees and 
display it  */

#include<iostream>
using namespace std;
class Employee{
    private:
    int employee_number;
    float employe_compensatuion;
    public:
    void Set(int x,float y){
        employee_number=x;
        employe_compensatuion=y;
    }
    int GetNumber();
    float GetCompensation();
};
int main(){
    Employee e[3];
    for(int i=0; i<3;i++)
    {
        int num=0;
        float comp=0; 
        cout<<"Enter your Employee Number ";
        cin>>num;
        cout<<"Enter your Compensation ";
        cin>>comp;
        e[i].Set(num,comp);
    }
    cout<<endl;
    for(int j=0;j<3;j++){
        cout<<"The Employee number of Employee "<<j+1<<" is "<<e[j].GetNumber<<endl;
        cout<<"The Compensation of Employee "<<j+1<<" is "<<e[j].GetCompensation<<endl;
    }
}
int Employee::GetNumber(){
    return employee_number;
}
float Employee::GetCompensation(){
    return employe_compensatuion;
}