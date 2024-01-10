// Create a time class as you will create in Question # 3,
//  and instead of a function add_time(),it uses the overloaded +
//  operator to add two times.
#include <iostream>
using namespace std;
class times
{
private:
    int hour, minute, second;

public:
    times(int h = 0, int m = 0, int s = 0)
    {
        hour = h;
        minute = m;
        second = s;
    }
    times operator+(const times &t)
    {
        times temp;
        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour + (temp.minute / 60);
        temp.minute %= 60;
        temp.second = second + t.second;
        temp.second %= 60;
        return temp;
    }
    void display()
    {
        if (hour < 10)
        {
            cout << "0";
        }
        cout << hour << ":";

        if (minute < 10)
        {
            cout << "0";
        }
        cout << minute << ":";

        if (second < 10)
        {
            cout << "0";
        }
        cout << second << endl;
    }
};

int main()
{
    times t1(11, 59, 59);
    times t2(10, 50, 30);
    times t3(18, 20, 15);

    times t4 = t1 + t2;
    times t5 = t1 + t3;
    times t6 = t2 + t3;

    cout << "t4 = ";
    t4.display();
    cout << "t5 = ";
    t5.display();
    cout << "t6 = ";
    t6.display();
    return 0;
}