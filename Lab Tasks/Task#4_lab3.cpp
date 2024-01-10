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
    cout<<endl<<endl;

    delete[] array ;
    

    /*   Write a C++ program which extends the first task in a 
    way that take two numbers from the user, called min and max.
    First the program creates the array to the size of min number
    and print the given numbers.After that, it dynamically 
    resizes the array to the max number and print all the number
    up to the max number.
    */

   int min,max;

   cout<<"Enter the minimum number ";
   cin>>min;
   cout<<"Enter the maximun number ";
   cin>>max;
   

}