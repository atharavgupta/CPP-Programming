#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    float balance;

public:
    int accountNo;
    int customerID;
    BankAccount()
    {
        balance = 0;
    }
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "\nAmount deposited successfully!";
        }
        else
        {
            cout << "\nInvalid deposit amount!";
        }
    }
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "\nAmount withdrawn successfully!";
        }
        else
        {
            cout << "\nInvalid withdrawal amount or insufficient balance.\n";
        }
    }
    float getBalance()
    {
        return balance;
    }
    void info()
    {
        cout << "\n\n========== ACCOUNT DETAILS ==========\n";
        cout << "\nAccount No: " << accountNo << "\n";
        cout << "Customer ID: " << customerID << "\n";
        cout << "Current balance: " << getBalance() << "\n";
    }
};
int main()
{
    int choice;
    float amount;
    BankAccount acc1;
    cout << "Enter Account No: ";
    cin >> acc1.accountNo;
    cout << "Enter Customer ID: ";
    cin >> acc1.customerID;
    do
    {
        cout << "\n\nWhat do you want to do?\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc1.deposit(amount);
            acc1.info();
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc1.withdraw(amount);
            acc1.info();
            break;
        case 3:
            cout << "\nExiting...";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 3);
    return 0;
}