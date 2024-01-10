/*  Write a C++ program which take the number from the user
 and create a dynamic array having size of a given number. 
 This program then should print only all the even numbers.
  After printing, the program must free up the memory allocated 
  to that array. 
    */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    cout<<endl<<"Enter "<<n<<" numbers "<<endl;
    int *array = new int(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<endl<<endl<<"The even numbers in the series are "<<endl;
    for(int j=0;j<n;j++){
        if(array[j]%2 == 0){
            cout<< array[j]<<"   ";
        }
    }

    delete[] array ;
    return 0;
}