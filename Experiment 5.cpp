#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display()
    {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("Apoorva", 101, 5000);

    account.display();

    account.deposit(2000);
    account.display();

    account.withdraw(1500);
    account.display();

    account.withdraw(7000);

    return 0;
}