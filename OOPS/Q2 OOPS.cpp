include <iostream>
#include <string>
#include <vector>
using namespace std;


class Account {
protected:
    string accountNumber;
    string accountHolderName;
    double balance;
    vector<string> transactionHistory;

public:
    Account(string accNo, string holderName, double initialBalance)
        : accountNumber(accNo), accountHolderName(holderName), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back("Deposited: " + to_string(amount));
    }

    virtual bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            transactionHistory.push_back("Withdrawn: " + to_string(amount));
            return true;
        } else {
            cout << "Insufficient balance!\n";
            return false;
        }
    }

    void displayTransactionHistory() {
        cout << "Transaction History:\n";
        for (const string &transaction : transactionHistory) {
            cout << transaction << endl;
        }
    }

    virtual void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(string accNo, string holderName, double initialBalance, double rate)
        : Account(accNo, holderName, initialBalance), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        transactionHistory.push_back("Interest Earned: " + to_string(interest));
    }

    void displayDetails() override {
        Account::displayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(string accNo, string holderName, double initialBalance, double overdraft)
        : Account(accNo, holderName, initialBalance), overdraftLimit(overdraft) {}

    bool withdraw(double amount) override {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            transactionHistory.push_back("Withdrawn (Overdraft): " + to_string(amount));
            return true;
        } else {
            cout << "Overdraft limit exceeded!\n";
            return false;
        }
    }

    void displayDetails() override {
        Account::displayDetails();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};


int main() {
    // Create Savings Account
    cout << "Enter details for Savings Account:\n";
    string sAccNo, sHolderName;
    double sInitialBalance, sInterestRate;
    cout << "Account Number: ";
    cin >> sAccNo;
    cout << "Account Holder Name: ";
    cin >> sHolderName;
    cout << "Initial Balance: ";
    cin >> sInitialBalance;
    cout << "Interest Rate (%): ";
    cin >> sInterestRate;
    SavingsAccount savings(sAccNo, sHolderName, sInitialBalance, sInterestRate);

    cout << "\nEnter details for Current Account:\n";
    string cAccNo, cHolderName;
    double cInitialBalance, cOverdraftLimit;
    cout << "Account Number: ";
    cin >> cAccNo;
    cout << "Account Holder Name: ";
    cin >> cHolderName;
    cout << "Initial Balance: ";
    cin >> cInitialBalance;
    cout << "Overdraft Limit: ";
    cin >> cOverdraftLimit;
    CurrentAccount current(cAccNo, cHolderName, cInitialBalance, cOverdraftLimit);

    
    savings.deposit(500);
    savings.withdraw(200);
    savings.calculateInterest();

    current.deposit(1000);
    current.withdraw(1500);
    current.withdraw(300); 

    
    cout << "\nSavings Account Details:\n";
    savings.displayDetails();
    savings.displayTransactionHistory();

    cout << "\nCurrent Account Details:\n";
    current.displayDetails();
    current.displayTransactionHistory();

    return 0;
}
