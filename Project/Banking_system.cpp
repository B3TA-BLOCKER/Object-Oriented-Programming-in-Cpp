#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>

using namespace std;

class Bank
{
private:
    struct Admin
    {
        int Pin[4] = {1, 2, 3, 4};
        string Id = "B3TA-BLOCKER";
        string password = "GIKI_Cyber";
    };

    struct User
    {
        string Name;
        string Address;
        string Password;
        string Father_Name;
        string Mother_Name;
        string ID;
        char CNIC_Number[15];
        char Father_CNIC_Number[15];
        char Mother_CNIC_Number[15];
        char Pin[4];
        long double Balance;
        int Age;
    };

    Admin admin;
    User users[100];
    int numUsers;

public:
    Bank()
    {
        numUsers = 0;
    }

    void main_screen()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        User_type();
    }

    void Admin_verification()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        int pin[4];
        string id, password;
        cout << "Admin Verification" << endl;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Password: ";
        cin >> password;
        bool flag = false;
        // Checking  id and password with admin's data
        if (id == admin.Id && password == admin.password)
        {
            //
            flag = true;
        }
        else
        {
            cout << "Invalid credentials. Returning to main screen." << endl;
            main_screen();
        }
        if (flag == true)
        {
            system("CLS");
            cout << "\t\t\t ******* Kali Bank ******* " << endl
                 << endl
                 << endl
                 << endl;
        start:
            char ch;
            cout << "{ 1 }.For Complete Record " << endl;
            cout << "{ 2 }. For Specific Search " << endl;
            cout << "Enter  your choice : ";
            cin >> ch;
            switch (ch)
            {
            case '1':
            {
                Complete_Record();
            }
            break;
            case '2':
            {
                Specific_search();
            }
            break;
            dafault:
            {
                cout << "Wrong Entry";
                goto start;
            }
            }
        }
    back:
        char ch;
        cout << endl
             << endl
             << endl
             << "{1}.For Previous Page " << endl;
        cout << "{2}.For searching again" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case '1':
        {
            main_screen();
        }
        break;
        case '2':
        {
            goto start;
        }
        break;
        default:
        {
            cout << "Wrong Entry ";
            for (int i = 0; i < 5; i++)
            {
                cout << " . ";
                sleep(1);
            }
            goto back;
        }
        }
    }

    void Complete_Record()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        cout << "Complete Record" << endl;
        // Display records of every user
        for (int i = 0; i < numUsers; i++)
        {
            cout << "User " << i + 1 << ":" << endl;
            cout << "Name: " << users[i].Name << endl;
            cout << "Address: " << users[i].Address << endl;
            cout << "ID: " << users[i].ID << endl;
            cout << "CNIC Number: " << users[i].CNIC_Number << endl;
            cout << "Father's CNIC Number: " << users[i].Father_CNIC_Number << endl;
            cout << "Mother's CNIC Number: " << users[i].Mother_CNIC_Number << endl;
            cout << "Balance: " << users[i].Balance << endl;
            cout << "Age: " << users[i].Age << endl;
            cout << "---------------------------" << endl;
        }
    }

    void Specific_search()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        string id;
        cout << "Specific Search" << endl;
        cout << "Enter user ID: ";
        cin >> id;
        bool found = false;
        // Search for user with matching ID
        for (int i = 0; i < numUsers; i++)
        {
            if (users[i].ID == id)
            {
                cout << "User found!" << endl;
                cout << "Name: " << users[i].Name << endl;
                cout << "Address: " << users[i].Address << endl;
                cout << "ID: " << users[i].ID << endl;
                cout << "CNIC Number: " << users[i].CNIC_Number << endl;
                cout << "Father's CNIC Number: " << users[i].Father_CNIC_Number << endl;
                cout << "Mother's CNIC Number: " << users[i].Mother_CNIC_Number << endl;
                cout << "Balance: " << users[i].Balance << endl;
                cout << "Age: " << users[i].Age << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << endl
                 << endl
                 << "User not found." << endl
                 << endl;
            cout << "Directing you to the Home Page ";
            for (int i = 0; i < 5; i++)
            {
                cout << " .";
                sleep(1);
            }
        }
    }

    void User_type()
    {
    start:
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        int choice;
        cout << "1. Admin" << endl;
        cout << "2. User Login " << endl;
        cout << "3. Sign up" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Admin_verification();
            break;
        case 2:
            User_login();
            break;
        case 3:
            User_Signup();
        case 4:
            system("CLS");
            cout << endl
                 << endl
                 << "     **** Thank you for using the Kali Bank **** " << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            goto start;
            break;
        }
    }

    void User_Signup()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        User user;
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        cout << "User Signup" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, user.Name);
        cout << "Address: ";
        getline(cin, user.Address);
        cout << "Password: ";
        cin >> user.Password;
        cout << "Father's Name: ";
        cin.ignore();
        getline(cin, user.Father_Name);
        cout << "Mother's Name: ";
        getline(cin, user.Mother_Name);
        cout << "ID: ";
        cin >> user.ID;
        cout << "CNIC Number: ";
        cin >> user.CNIC_Number;
        cout << "Father's CNIC Number: ";
        cin >> user.Father_CNIC_Number;
        cout << "Mother's CNIC Number: ";
        cin >> user.Mother_CNIC_Number;
        cout << "Pin: ";
        cin >> user.Pin;
        cout << "Balance: ";
        cin >> user.Balance;
        cout << "Age: ";
        cin >> user.Age;
        // Add user to the array of users
        users[numUsers++] = user;
        cout << "User signup successful!" << endl;
        sleep(2);
        main_screen();
    }

    void User_login()
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        string id, password;
        cout << "User Login" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Password: ";
        cin >> password;
        int index = -1;
        // Searching the user of that perticular ID and password
        for (int i = 0; i < numUsers; i++)
        {
            if (users[i].ID == id && users[i].Password == password)
            {
                index = i;
                break;
            }
        }
        if (index != -1)
        {
            User_choice(index);
        }
        else
        {
            cout << "Invalid credentials." << endl
                 << " Returning to main screen.";
            for (int i = 0; i < 5; i++)
            {
                cout << " .";
                sleep(1);
            }
            main_screen();
        }
    }

    void User_choice(int index)
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
    start:
        int choice;
        cout << "1. Cash Deposit" << endl;
        cout << "2. Money Transfer" << endl;
        cout << "3. Account Status" << endl;
        cout << "4. Delete Account" << endl;
        cout << "5. Logout" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Cash_Deposit(index);
            break;
        case 2:
            Money_Transfer(index);
            break;
        case 3:
            Account_status(index);
            break;
        case 4:
            Delete_Account(index);
            break;
        case 5:
            system("CLS");
            cout << "Logging out.";
            for (int i = 0; i < 5; i++)
            {
                cout << " .";
                sleep(1);
            }
            main_screen();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            goto start;
            break;
        }
    }

    void Cash_Deposit(int index)
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        double amount;
        cout << "Cash Deposit" << endl;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        // Update the user's balance
        users[index].Balance += amount;
        cout << "Deposit successful!" << endl;
        User_choice(index);
    }

    void Money_Transfer(int index)
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        string targetId;
        double amount;
        cout << "Money Transfer" << endl;
        cout << "Enter the recipient's ID: ";
        cin >> targetId;
        int targetIndex = -1;
        // Search for the recipient's ID
        for (int i = 0; i < numUsers; i++)
        {
            if (users[i].ID == targetId)
            {
                targetIndex = i;
                break;
            }
        }
        if (targetIndex != -1)
        {
            system("CLS");
            cout << "\t\t\t ******* Kali Bank ******* " << endl
                 << endl
                 << endl
                 << endl;
            cout << "Enter the amount to transfer: ";
            cin >> amount;
            // Check if the user have enough money
            if (users[index].Balance >= amount)
            {
                // Update the balances of sender and recipient
                users[index].Balance -= amount;
                users[targetIndex].Balance += amount;
                cout << "Money transfer successful!" << endl;
            }
            else
            {
                cout << "Insufficient balance.";
                for (int i = 0; i < 5; i++)
                {
                    cout << " .";
                    sleep(1);
                }
                User_choice(index);
            }
        }
        else
        {
            cout << "Recipient not found.";
            for (int i = 0; i < 5; i++)
            {
                cout << " .";
                sleep(1);
            }
        }
        User_choice(index);
    }

    void Account_status(int index)
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        cout << "Account Status" << endl;
        cout << "Name: " << users[index].Name << endl;
        cout << "Address: " << users[index].Address << endl;
        cout << "ID: " << users[index].ID << endl;
        cout << "CNIC Number: " << users[index].CNIC_Number << endl;
        cout << "Father's CNIC Number: " << users[index].Father_CNIC_Number << endl;
        cout << "Mother's CNIC Number: " << users[index].Mother_CNIC_Number << endl;
        cout << "Balance: " << users[index].Balance << endl;
        cout << "Age: " << users[index].Age << endl;
        User_choice(index);
    }

    void Delete_Account(int index)
    {
        system("CLS");
        cout << "\t\t\t ******* Kali Bank ******* " << endl
             << endl
             << endl
             << endl;
        cout << "Delete Account" << endl;
        // Shift the array elements to overwrite the deleted user
        for (int i = index; i < numUsers - 1; i++)
        {
            users[i] = users[i + 1];
        }
        numUsers--;
        system("CLS");
        cout << "Account deleted." << endl;
        sleep(2);
        main_screen();
    }
};

int main()
{
    Bank bank;
    bank.main_screen();
    return 0;
}