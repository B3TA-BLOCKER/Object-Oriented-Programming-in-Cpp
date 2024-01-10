#include<iostream>
using namespace std;
float sum1(float num1 , float num2 , float num3 );
float sum2(float num2 ,float num3);
int main(){
    float num1,num2,num3;

    cout<<"Enter a number ";
    cin>>num1;
    cout<<"Enter a number ";
    cin>>num2;
    cout<<"Enter a number ";
    cin>>num3 ;

    cout<< sum1(num1 , num2 ,num3);

    return 0;
}
float sum1(float num1 , float num2 ,float num3){
    return (num1 + sum2(num2,num3));
}
float sum2 (float num2 , float num3  ){
    return (num2 +num3);
}