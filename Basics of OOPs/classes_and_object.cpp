#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test_case;
    int test_sum=0;
    int sum=0;
    int great=0;
    cout<<"Enter the number of test casees : ";
    cin>>test_case;
    
    int grade[test_case][5];
    for(int i=0;i<test_case;i++){
        cout<<"Enter the elements of the array index "<<i+1<<endl;
        for(int j=0;j<5;j++){
            cin>>grade[i][j];
        }
    }
    
    for(int i=0;i<test_case;i++){
        for(int j=0;j<5;j++){
            if(i==0){
                test_sum += grade[i][j];
            }
            else{
                sum += grade[i][j];
            }
        }
        if(sum>test_sum){
            great++;
        }
        sum=0;
    }
    cout<<great;
    return 0;
}
