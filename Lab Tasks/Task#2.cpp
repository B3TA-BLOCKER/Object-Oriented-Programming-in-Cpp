#include<iostream>
using namespace std;
class Vehical{
    public:
        virtual void drive()=0;
};

class Car:public Vehical{
    public:
        void drive(){
            cout<<"Driving a car "<<endl;
        }
};

class Bicycle : public Vehical{
    public:
        void drive(){
            cout<<"Riding a bicycle "<<endl;
        }
};
int main(){
    Car obj1;
    Bicycle obj2;

    Vehical *ptr;
    cout<<"For Car :- "<<endl;
    ptr=&obj1;
    ptr->drive();

    cout<<"For Bicycle  :- "<<endl;
    ptr=&obj2;
    ptr->drive();

    return 0;
}



vector<int>::itrerator it;
