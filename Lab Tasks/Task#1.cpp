#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void area(){}
};

class Circle : public Shape{
    public:
        void area(){
            float red;
            cout<<"Enter The value of the radius of the circle :  ";
            cin>>red;
            float result;
            result = 3.142 *(red*red);
            cout<< result<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void area(){
            float length, width, result;
            cout<<"Enter the Length of the Rectangle : ";
            cin>>length;
            cout<<"Enter the Length of the Rectangle : ";
            cin>>width;
            result = length*width;
            cout<<result<<endl;
        }
};
int main(){
    Circle obj1;
    Rectangle obj2;

    // Shape *ptr;
    // ptr=&obj1;
    // ptr->area();

    // ptr=&obj2;
    // ptr->area();

    obj1.area();
    obj2.area();

    return 0;
}