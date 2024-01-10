#include <iostream>
#include <string>
using namespace std;

class Publication {
    protected:
        string title;
        float price;
    public:
        void getdata() {
            cout << "Enter the title: ";
            getline(cin, title);
            cout << "Enter the price: ";
            cin >> price;
            cin.ignore(); // ignore newline character
        }
        void putdata() {
            cout << "Title: " << title << endl;
            cout << "Price: $" << price << endl;
        }
};

class Book : public Publication {
    private:
        int page_count;
    public:
        void getdata() {
            Publication::getdata(); // call base class function
            cout << "Enter the page count: ";
            cin >> page_count;
            cin.ignore(); // ignore newline character
        }
        void putdata() {
            Publication::putdata(); // call base class function
            cout << "Page count: " << page_count << endl;
        }
};

class Tape : public Publication {
    private:
        float playing_time;
    public:
        void getdata() {
            Publication::getdata(); // call base class function
            cout << "Enter the playing time in minutes: ";
            cin >> playing_time;
            cin.ignore(); // ignore newline character
        }
        void putdata() {
            Publication::putdata(); // call base class function
            cout << "Playing time: " << playing_time << " minutes" << endl;
        }
};

int main() {
    Book b;
    Tape t;
    
    cout << "Enter the details of the book:\n";
    b.getdata();
    cout << "\nEnter the details of the audiocassette:\n";
    t.getdata();
    
    cout << "\nBook details:\n";
    b.putdata();
    cout << "\nAudiocassette details:\n";
    t.putdata();
    
    return 0;
}