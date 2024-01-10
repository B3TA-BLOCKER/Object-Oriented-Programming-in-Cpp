#include <iostream>
using namespace std;
class BankAccount
{
private:
    int account_number;
    int balance;
    float interest_rate;

public:
    static int num_of_account;
    BankAccount()
    {
        account_number = 0;
        balance = 0;
        interest_rate = 0;
        num_of_account++;
    }

    void set()
    {
        cout << "Enter your Account number ";
        cin >> account_number;
        cout << "Enter your balance ";
        cin >> balance;
        cout << "Enter the interest rate ";
        cin >> interest_rate;
    }
    int get_account_number()
    {
        return account_number;
    }
    int get_balance()
    {
        return balance;
    }
    float get_interest_rate()
    {
        return interest_rate;
    }
    float calculateinterest()
    {
        float x;
        x = balance * (interest_rate / 100);
        return x;
    }
    friend void transfer(BankAccount a, BankAccount b, int perice);
    static int get_noaccount()
    {
        return num_of_account;
    }
};
int BankAccount::num_of_account = 0;

void transfer(BankAccount a, BankAccount b, int perice)
{
    if (a.get_balance() <= perice)
    {
        cout << "Insuffecent balance " << endl;
    }
    else
    {
        a.balance -= perice;
        b.balance += perice;
        cout << "Transacction successful ";
    }
}
int main()
{
    BankAccount obj1, obj2;
    const BankAccount obj3;

    obj1.set();
    obj2.set();
    int perice;
    cout << "Enter price ";
    cin >> perice;

    transfer(obj1, obj2, perice);
    cout << " \nThe number of accounts are  " << obj2.num_of_account << endl;
    cout << obj1.get_noaccount();

    return 0;
}