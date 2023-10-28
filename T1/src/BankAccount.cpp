#include "BankAccount.hpp"
#include <iostream>
using namespace std;

// Constructor pentru a inițializa contul bancar
BankAccount::BankAccount(const string& accNumber, const string& accHolder, double initialBalance) {
    accountNumber = accNumber;
    accountHolder = accHolder;
    balance = new double(initialBalance);
}

// Incapsulare - Metode pentru a accesa datele private
const string& BankAccount::getAccountNumber() const {
    return accountNumber;
}

const string& BankAccount::getAccountHolder() const {
    return accountHolder;
}

double BankAccount::getBalance() const {
    return *balance;
}

//Eliberarea heap-ului în destructor
BankAccount::~BankAccount() {
    delete balance;
}

//Suprascrierea copy constructorului
BankAccount::BankAccount(const BankAccount& other) {
    accountNumber = other.accountNumber;
    accountHolder = other.accountHolder;
    balance = new double(*(other.balance));
}

//Suprascrierea operatorului de atribuire
BankAccount& BankAccount::operator=(const BankAccount& other) {
    if(this==&other) {
        return *this; //Evitam auto-atribuirea
    }
    accountNumber = other.accountNumber;
    accountHolder = other.accountHolder;


    //Eliberaram memoria veche din heap si alocam memorie noua pentru balance
}






// Metodă pentru a efectua un depozit în cont
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        *balance += amount;
        cout << "Deposit amount " << amount << " RON done. The actual balance is " << *balance << " RON." << endl;
    } else {
        cout << "The deposit amount should be more than zero." << endl;
    }
}

// Metodă pentru a efectua o retragere din cont
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= *balance) {
        *balance -= amount;
        cout << "Withdrawal amount of " << amount << " RON done. The actual balance is " << *balance << " RON." << endl;
    } else if (amount > *balance) {
        cout << "Insufficient funds for the withdrawal." << endl;
    } else {
        cout << "The withdrawal amount should be more than zero." << endl;
    }
}

// Metodă pentru a afișa informațiile despre cont
void BankAccount::displayAccountInfo() {
    cout << "Account number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Actual balance: " << *balance << " RON" << endl;
}

int main() {
    // Create a BankAccount object
    BankAccount myAccount("242546", "Emily Swift", 1000.0);

    // Display initial account information
    cout << "Initial account information:" << endl;
    myAccount.displayAccountInfo();

    // Perform some transactions
    myAccount.deposit(700.0);
    myAccount.withdraw(200.0);

    // Display updated account information
    cout << "\nUpdated account information:" << endl;
    myAccount.displayAccountInfo();

    return 0;
}
