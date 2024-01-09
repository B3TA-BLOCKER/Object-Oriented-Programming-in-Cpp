#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Function Object :-
            -> Function Wrapped in a Class so that it is avaliable as an object.
            => We also need to add a header file ie;
                -> #include<functional>
    */
    int arr[] = {10, 73, 94, 12, 54, 77};
    // sort(arr, arr + 5);

    /*
        To sort in decending order 
            -> sort(arr,arr+6,greater<int>());

    */
    sort(arr,arr+6,greater<int>());
    // arr+5 means that first 5 elements will only be sorted;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}