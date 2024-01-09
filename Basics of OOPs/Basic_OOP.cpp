#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){
        for(int j=0;j<3;j++){
            cout<<"name = ";
            cin>>arr[j].name;
            cout<<"Age  ";
            cin>>arr[j].age;
            cout<<"Gender = ";
            cin>>arr[j].gender;
        }

    }
};
int main(){
    student arr[3];

    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    
    
    return 0;
}