#include<iostream>
using namespace std;
int main(){
    int x=5;
    int arr[5][5][5];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<x;k++)
            {
                cin>>arr[i][j][k];
            }
        }
    } 

    for(int m=0;m<x;m++){
        for(int n=0;m<x;m++){
            for(int o=0;o<x;o++){
                cout<<arr[m][n][o];
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}