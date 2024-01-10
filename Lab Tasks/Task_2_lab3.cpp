/*  Write a c++ program where create an of array size 10 and then dynamically allocate
 memory to the array.The program should then prompt the user to enter 10 integers and 
 store them in the dynamically allocated array. Finally, the program should output 
 the sum of the integers in the array and free up the dynamic memory.   
  */
#include<iostream>
using namespace std;
int main(){
    int n=10,sum=0;
    int *arr = new int(n);

    cout<<"  Enter a series of number "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;

    delete[] arr;

    return 0;
}