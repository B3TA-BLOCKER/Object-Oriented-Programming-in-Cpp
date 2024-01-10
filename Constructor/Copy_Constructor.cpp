#include<iostream>
using namespace std;

class Number {
    int a ;
    public :
    Number(){
        a=0;
    }
        Number(int num){
            a= num;
        }
        // copy Constructor;
        Number(Number &obj){
            cout<<"Copy constructor called "<<endl;
            a=obj.a;
        }
        void display(void){
            cout<<"The number for this objects is "<<a<<endl;
        }
};

int main(void){
    Number x,y,z(45);
    cout<<endl;
    x.display();
    y.display();
    z.display();

    // Now if I want another object with exactly like the previous object so I will use COPY Constructor;

    Number z1(x);
    z1.display();
}