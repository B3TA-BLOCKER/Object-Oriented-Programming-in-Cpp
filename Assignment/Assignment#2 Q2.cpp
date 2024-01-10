/*Create an employee class. The member data should comprise an int for storing
the employee number and a float for storing the employee’s compensation.
Member functions should allow the user to enter this data and display it.
Write a main () that allows the user to enter data for three employees and
display it.*/

#include <iostream>
using namespace std;
class Employee
{
private:
  int emp_number;
  float emp_comp;

public:
  void enter_data()
  {
    cout << "Enter employee number: ";
    cin >> emp_number;
    cout << "Enter employee compensation: ";
    cin >> emp_comp;
  }
  void display_data()
  {
    cout << "Employee number: " << emp_number << endl;
    cout << "Employee compensation: " << emp_comp << endl;
  }
};
int main()
{
  // array of three Employees
  Employee employees[3];
  // entering data for each employee by array
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter data for employee " << i + 1 << endl;
    employees[i].enter_data();
  }
  // displaying data for each employee by array
  for (int i = 0; i < 3; i++)
  {
    cout << "Displaying data for employee " << i + 1 << endl;
    employees[i].display_data();
  }
  return 0;
}