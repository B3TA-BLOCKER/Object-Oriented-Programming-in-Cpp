// Function Overriding;

#include<iostream>
using namespace std;
class A{
    protected:
        int x,y;
    public:
        A(){
            x=y=0;
        }
        void get(){
            cout<<"Enter x : ";
            cin>>x;
            cout<<"Enter y : ";
            cin>>y;
        }
        void add(){
            cout<<"Addition "<<x+y<<endl;
        }
        void sub(){
            cout<<"substraction is : "<<x-y<<endl;
        }
};

class B: public A{
    public:
    void add(){
        if (x<0 || y<0){
            cout<<"Invalid ! "<<endl;
        }
        else {
            A::add();
        }
    }
    void sub(){
        cout<<"Hi "<<endl;
    }
};
int main(){
    B obj1;

    obj1.get();
    obj1.add();
    //obj1.sub();
    obj1.A::sub();

    return 0;
}