#include  <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    class Account
    {
    private:
        int accountNumber;
        string accountHolderName;
        double balance;

    public:
        Account()
        {
            accountNumber = 0;
            accountHolderName = "";
            balance = 0.0;
        }

        void setAccountDetails(int accNum, const string &holderName)

        {
            accountNumber = accNum;
            accountHolderName = holderName;
            balance = 0.0;
        }

        void setBalance(double bal) { balance = bal; }
        int getAccountNumber() const { return accountNumber; }
        string getAccountHolderName() const { return accountHolderName; }
        double getBalance() const { return balance; }

        void displayBalance() const
        {
            cout << "Current Balance: Rs." << balance << endl;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: Rs." << amount << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: Rs." << amount << endl;
            }
            else
            {
                cout << "Insufficient funds!" << endl;
            }
        }
    };

    static const int SIZE = 5;
    Account accounts[SIZE]; 

public:
    
    void initializeAccount(int i, int accNum, const string &holderName)
    {
        if (i >= 0 && i < SIZE)
        {
            accounts[i].setAccountDetails(accNum, holderName);
        }
        else
        {
            cout << "Invalid index! Valid range: 0-4" << endl;
        }
    }

    void displayAccountDetails(int i) const
    {
        if (i < 0 || i >= SIZE)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        cout << "--- Account " << i << " Details ---" << endl;
        cout << "Account Number : " << accounts[i].getAccountNumber() << endl;
        cout << "Account Holder : " << accounts[i].getAccountHolderName() << endl;
        cout << "--------------------------" << endl;
    }

    void displayBalance(int i) const
    {
        if (i >= 0 && i < SIZE)
            accounts[i].displayBalance();
    }

    void deposit(int i, double amount)
    {
        if (i >= 0 && i < SIZE)
            accounts[i].deposit(amount);
    }

    void withdraw(int i, double amount)
    {
        if (i >= 0 && i < SIZE)
            accounts[i].withdraw(amount);
    }

   
    void displayAll() const
    {
        for (int i = 0; i < SIZE; i++)
        {
            displayAccountDetails(i);
            displayBalance(i);
            cout << endl;
        }
    }
};

int main()
{
    Bank bank;

    
    bank.initializeAccount(0, 1001, "Anup Ranjan");
    bank.initializeAccount(1, 1002, "Rahul Sharma");
    bank.initializeAccount(2, 1003, "Priya Singh");
    bank.initializeAccount(3, 1004, "Amit Kumar");
    bank.initializeAccount(4, 1005, "ajit singh");

    cout << "===== All Accounts =====" << endl
         << endl;
    bank.displayAll();

   
    bank.deposit(0, 5000);
    bank.withdraw(2, 1000); 
    bank.deposit(2, 8000);
    bank.withdraw(2, 1000);

    cout << endl
         << "===== After Transactions =====" << endl
         << endl;
    bank.displayAll();

    return 0;
}