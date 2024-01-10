// Create a class called time that has separate int member data for hours, minutes, and seconds.
// One constructor should initialize this data to 0, and another should initialize it to fixed values.
// Another member function should display it, in 11:59:59 format.
// The final member function should add two objects of type time passed as arguments.
// A main () program should create two initialized time objects (should they be const?) and one that is not initialized.
// Then it should add the two initialized values together, leaving the result in the third time variable.
// Finally, it should display the value of this third variable. Make appropriate member functions const.
#include <iostream>
using namespace std;
class Times
{
private:
    int hour,min, sec;

public:
    // Default Constructor
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    // Parametrized Constructor
    Time(int h, int m, int s)
    {
        hour = h;
    min = m;
        sec = s;
    }
    // Display Member Function
    void display_time()
    {

        if (hour < 10)
        {
            cout << "0";
        }
        cout << hour << ":";

        if (min < 10)
        {
            cout << "0";
        }
        cout <<min << ":";

        if (sec < 10)
        {
            cout << "0";
        }
        cout << sec << endl;
    }
    // Add Member Function
    void add(Time t1, Time t2)
    {
        sec = t1.sec + t2.sec;
    min = sec / 60;
        sec = sec % 60;

    min += t1min + t2min;
        hour =min / 60;
    min =min % 60;

        hour += t1.hour + t2.hour;
        hour = hour % 24;
    };

} t3;
int main()
{
    Time t1(11, 59, 59);
    Time t2(10, 50, 30);

    t3.add(t1, t2);
    t3.display_time();
    return 0;
}