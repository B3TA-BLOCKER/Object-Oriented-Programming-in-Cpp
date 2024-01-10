#include <iostream>
#include <string>
using namespace std;

class employee {
    private:
        string name;
        long id;
        int age;
    public:
        void getdata() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter ID number: ";
            cin >> id;
            cout << "Enter age: ";
            cin >> age;
        }
        void putdata() {
            cout << "Name: " << name << endl;
            cout << "ID number: " << id << endl;
            cout << "Age: " << age << endl;
        }
};

enum period { HOURLY, WEEKLY, MONTHLY };

class employee2 : public employee {
    protected:
        double compensation;
        period pay_period;
    public:
        void getdata() {
            employee::getdata(); // call base class function
            cout << "Enter compensation: ";
            cin >> compensation;
            cout << "Enter pay period (0 = hourly, 1 = weekly, 2 = monthly): ";
            int period_choice;
            cin >> period_choice;
            pay_period = static_cast<period>(period_choice);
        }
        void putdata() {
            employee::putdata(); // call base class function
            cout << "Compensation: $" << compensation << endl;
            string period_string;
            switch (pay_period) {
                case HOURLY:
                    period_string = "hourly";
                    break;
                case WEEKLY:
                    period_string = "weekly";
                    break;
                case MONTHLY:
                    period_string = "monthly";
                    break;
            }
            cout << "Pay period: " << period_string << endl;
        }
};

class manager2 : public employee2 {
    private:
        string title;
    public:
        void getdata() {
            employee2::getdata(); // call base class function
            cout << "Enter title: ";
            getline(cin, title);
        }
        void putdata() {
            employee2::putdata(); // call base class function
            cout << "Title: " << title << endl;
        }
};

class scientist2 : public employee2 {
    private:
        int pubs;
    public:
        void getdata() {
            employee2::getdata(); // call base class function
            cout << "Enter number of publications: ";
            cin >> pubs;
        }
        void putdata() {
            employee2::putdata(); // call base class function
            cout << "Number of publications: " << pubs << endl;
        }
};

class laborer2 : public employee2 {
    // no additional data members or member functions
};

int main() {
    manager2 m;
    scientist2 s;
    laborer2 l;

    cout << "Enter details of manager:\n";
    m.getdata();
    cout << "\nEnter details of scientist:\n";
    s.getdata();
    cout << "\nEnter details of laborer:\n";
    l.getdata();

    cout << "\nDetails of manager:\n";
    m.putdata();
    cout << "\nDetails of scientist:\n";
    s.putdata();
    cout << "\nDetails of laborer:\n";
    l.putdata();

    return 0;
}
