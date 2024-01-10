#include<iostream>
using namespace std;

class student {
    protected:
        int roll_number ;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number=r;
}

void student::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}


class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void exam::set_marks(float m1,float p1){
    maths=m1;
    physics=p1;
}
void exam::get_marks(){
    cout<<"The Marks Obtained in Maths are "<<maths<<endl;
    cout<<"The Marks Obtained in Physics are "<<physics<<endl;
}

int main(){

    return 0;
}