#include<iostream>
#include<map>
#include<string>

using namespace std;


// Map is an associative array 
int main(){
    map<string,int> marks;
    marks["Ali"] = 98;
    marks["Jacks"] = 78;
    marks["James"] = 2;

    // To Insert new elements in the map ;
        marks.insert({{"Hammid",69},{"Bashir",99}});
    map<string,int> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<"'s Marks = "<<(*iter).second<<endl;
    }
    cout<<endl<<"The Marks Size is : "<<marks.size()<<endl;
    cout<<"The Max Possible size is : "<<marks.max_size()<<endl;
    cout<<"The Empty's Return Value is : "<<marks.empty()<<endl;

}