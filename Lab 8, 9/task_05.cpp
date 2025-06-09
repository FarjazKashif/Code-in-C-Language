/*
A banking application that manages both customers and their bank accounts. Each
customer in the system has a unique identifier (customerID), a name, and can hold multiple
accounts. Customers should be able to perform key banking operations such as depositing
money, withdrawing money, and viewing account statements. The system must support
two main types of accounts: SavingsAccount and CurrentAccount. Implement a system
that tracks customer activity and bank account management.
*/

#include <iostream>
#include <vector>
using namespace std;

class Account
{
public:
    int accNumber;
    float balance;
    Account(int num) : accNumber(num), balance(0) {}
    virtual void deposit(float amt) { balance += amt; }
    virtual void withdraw(float amt) { balance -= amt; }
    virtual void statement() const
    {
        cout << "Acc#: " << accNumber << ", Balance: " << balance << "\n";
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int num) : Account(num) {}
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(int num) : Account(num) {}
};

class Customer
{
public:
    int id;
    string name;
    vector<Account *> accounts;
    Customer(int i, string n) : id(i), name(n) {}
    void addAccount(Account *a) { accounts.push_back(a); }
};
