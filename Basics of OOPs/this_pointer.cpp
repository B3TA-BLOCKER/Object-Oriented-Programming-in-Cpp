#include<iostream>
using namespace std;

class A{
    int a;
    public :
        void set_data(int a ){
            this->a = a;
        }
        void get_data(){
            cout<<"The value of 'A' is : "<<a<<endl;
        }
};

int main(){
    A a;
    a.set_data(4);
    a.get_data();

    return 0;
}