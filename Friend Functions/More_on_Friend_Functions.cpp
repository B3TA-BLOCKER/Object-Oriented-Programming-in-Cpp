#include<iostream>
using namespace std;

class Y;
class X{
    int data;
    public:
        void setdata(int value){
            data = value;
        }
        friend void add(X,Y); /*  to execute it properly we need to give 
                                  FORWARD DECLARATION of the class Y;    */ 
};

class Y{
    int num;
    public:
    void setvalue(int value){
        num = value;
    }
    friend void add(X,Y);
};

void add(X obj, Y obj1){
    cout<<"Summing the data of Class X and Y objects gives us "<<obj.data +obj1.num;
}

int main(){
    X a;
    Y b;
    a.setdata(3);
    b.setvalue(5);

    add(a,b);

    return 0;
}