#include<iostream>
using namespace std;
class base{
    public:
        virtual void show(){
            cout<<"Show function of the base class "<<endl;
        }
        void display (){
            cout<<"Display function of the Base Class "<<endl;
        }
};

class derived1 : public base{
    public:
        void show(){
            cout<<"Show function of the derived class "<<endl;
        }
        void display(){
            cout<<"Display function of Derived function "<<endl;
        }
};
int main(){
    derived1 obj1;
    base A;

    base *ptr;
    ptr=&A;
    ptr->show();
    ptr->display();

    ptr=&obj1;
    ptr->show();
    ptr->display();


    return 0;
}