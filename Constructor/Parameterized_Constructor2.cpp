#include<iostream>
using namespace std;

class Point {
    int x,y;
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }

        void Display_Points(){
            cout<<"The Points are ("<<x<<","<<y<<")"<<endl;
        }
};

int main(){
    Point p1(1,1);
    p1.Display_Points();
    Point p2(4,6);
    p2.Display_Points();
}