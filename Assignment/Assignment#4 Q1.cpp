#include<iostream>
using namespace std;
#define square_Area(a,b) (a)*(b)
int main(){
    float x,y;

    cout<<"Enter the length ";
    cin>>x;
    cout<<"Enter the width ";
    cin>>y;

    cout<<"The area of the square is "<<square_Area(x,y);

    return 0;
}