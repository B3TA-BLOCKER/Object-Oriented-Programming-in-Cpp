#include<iostream>
using namespace std;

int oring_the_niceness(int a ,int b){
    return (a|b);
}

#define oring(a,b) (a|b)

int main()
{
    cout<<" Calling the function directly in the main body  "<<oring_the_niceness(5,8)<<endl;
    cout<<" Calling using Macros declaration  "<<oring(5,8)<<endl;


    int (*pointer) (int a, int b ) = & oring_the_niceness;


    cout<<" Passing the function to pointer and calling it in the main body  "<< (*pointer)(5,8);


    return 0;

}