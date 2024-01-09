#include<iostream>
using namespace std;
class A{
    public:
    // we can also use pure virtulization;
    // syntax;-
    // virtual void show()=0;
    // the above code is a proto type it needs to be initialized and then difined like normal function;
        virtual void show(){   // if we dont write virtual it will only print "Class A"
            cout<<"Class A : "<<endl;
        }
};
class B: public A{
    public :
        void show(){
            cout<<"Class B : "<<endl;
        }
};
class C: public A{
    public:
        void show (){
            cout<<"Class C :"<<endl;
        }
};
int main(){
    A obj1;
    B obj2;
    C obj3;
    
    A *ptr;
    ptr=&obj1;
    ptr->show();

    ptr=&obj2;
    ptr->show();

    ptr=&obj1;
    ptr->show();


}