#include<iostream>
using namespace std;
union Data{
    int age;
    char gender ;
    float income;
};
int main(){
    Data person;
    int op;

    cout<<"Please select the Entity "<<endl;
    cout<<" 1 - age "<<endl;
    cout<<" 2 - gender "<<endl;
    cout<<" 3 - income "<<endl;
    cin>>op;

    switch (op){
        case 1:{
            cout<<"Enter the age of the person ";
            cin>>person.age;
            cout<<"The Age of the person is "<<person.age;
        }
        break;
        case 2:{
            cout<<"enter the gender of the person ";
            cin>>person.gender;
            cout<<"The Gender of the person is "<<person.gender;
        }
        break;
        case3:{
            cout<<"Enter the income of the person ";
            cin>>person.income;
            cout<<"The Income of the person is "<<person.income;
        }
        break;
        default:
        cout<<"Wrong Option ";
    }

    return 0;
}