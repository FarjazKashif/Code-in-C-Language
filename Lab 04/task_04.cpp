#include <iostream>
using namespace std;

/*
A bank wants to manage customer accounts using a C++ program. Each account has an
account number and balance. Define a class BankAccount where the deposit and
withdrawal functions are defined outside the class. The program should take another
BankAccount object as an argument to transfer money from one account to another.
Implement the class with appropriate functions and demonstrate a money transfer between
two accounts using object as an argument.
*/

class BankAccount {
private:
    int accnumber;
    float balance;
public:
    BankAccount() : accnumber(0), balance(0) {}
    BankAccount(int acc, float b) : accnumber(acc), balance(b) {}

    void withDrawal(float);
    void deposit(float);
    void transfer(BankAccount&, float);
    
};

void BankAccount::withDrawal(float amount) {
    if(amount > this->balance) cout << "Insufficient Balance!!" << endl;
    else {
    balance -= amount;
    cout << "Amount: $" << amount << " withdrawal successfully!!";
    }
}

void BankAccount::deposit(float amount) {
    balance += amount;
    cout << "Amount: $" << amount << " deposited successfully to Account " << this->accnumber << "!!" << endl;
}

void BankAccount::transfer(BankAccount& b, float a) {
    if(this->balance < a) cout << "Insufficient Balance!!" << endl;
    else {
    this->balance -= a;
    b.balance += a;

    cout << "\nSuccessfully Transfer!!\nAccount Number: " << this->accnumber << "\nTransfered Account Number: " << b.accnumber << "\nYour Balance: $" << this->balance << "\nReciever Balance: $" << b.balance << endl;
    }
}

int main() {
    cout << "==== Welcome ====" << endl;
    BankAccount b1(1, 200), b2(2, 900), b3(3, 100.33);
    b1.deposit(32.99);
    b2.deposit(32.99);
    b3.deposit(32.99);

    b1.transfer(b2, 30.0);

    return 0;
}