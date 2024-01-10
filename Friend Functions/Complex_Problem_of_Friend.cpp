/*
    We are going to swap the data of the private members of the both the classes ;

*/

#include<iostream>
using namespace std;


class c2;
class c1{
    int value;
    public:
        void intdata(int a){
            value = a;
        }
        void display(void){
            cout<<"The private value of the class C1 is : "<<value<<endl;
        }
        friend void exchange(c1 &,c2 &);
};


class c2{
    int value2;
    public:
        void intdata(int a){
            value2 = a;
        }
        void display(void){
            cout<<"The private value of the class C2 is : "<<value2<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x , c2 &y){
    int temp = x.value;
    x.value = y.value2;
    y.value2 = temp;
}

int main(){
    c1 obj1;
    c2 obj2;

    int one, two;

    cout<<"Enter The private value of the class C1 ";
    cin>>one;
    cout<<"Enter The private value of the class C2 ";
    cin>>two;
    
    obj1.intdata(one);
    obj2.intdata(two);

    exchange(obj1, obj2);

    cout<<"The values after Exchanging becomes ;-"<<endl;

    obj1.display();
    obj2.display();


    
    return 0;
}