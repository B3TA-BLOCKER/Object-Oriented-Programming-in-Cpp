#include<iostream>
using namespace std;

#define A 12
#define B 25
#define C 38

int main()
{

    cout<<" A Complement"<<(~A)<<endl;
    cout<<" A and C"<<(A&C)<<endl;
    cout<<" B or A"<<(B|A)<<endl;
    cout<<" B ^ C"<<(B^A)<<endl;
    cout<<" Right shift on A twice"<<(A>>2)<<endl;
    cout<<"Left shift on B twice"<<(B<<2)<<endl;


    return 0; 
}