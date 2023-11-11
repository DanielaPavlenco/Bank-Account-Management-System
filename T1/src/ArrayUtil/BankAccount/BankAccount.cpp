#include "BankAccount.hpp"
#include <iostream>

namespace BankAccounts {

    // Constructorul clasei BankAccount
    BankAccount::BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance) 
        : accountNumber(accNumber), accountHolder(accHolder) {
        balance = new double(initialBalance);
    }

    // Destructorul clasei BankAccount
    BankAccount::~BankAccount() {
        delete balance;
    }

    // Metoda pentru a obține numărul de cont
    const std::string& BankAccount::getAccountNumber() const {
        return accountNumber;
    }

    // Metoda pentru a obține titularul contului
    const std::string& BankAccount::getAccountHolder() const {
        return accountHolder;
    }

      // Metoda pentru a obține soldul contului
    double BankAccount::getBalance() const {
        return *balance;
    }
 
    void BankAccount::setAccountNumber(const std::string& accNumber) {
        accountNumber = accNumber;
    }

    void BankAccount::setAccountHolder(const std::string& accHolder) {
        accountHolder = accHolder;
    }

     // Implementarea constructorului de mutare (move constructor)
    BankAccount::BankAccount(BankAccount&& other) noexcept // noexcept-> indica ca functia nu va arunca exceptii de mutare
    : accountNumber(std::move(other.accountNumber)), 
    accountHolder(std::move(other.accountHolder)), balance(other.balance) {
    other.balance = nullptr; // Eliberăm resursele din obiectul sursă (other)
    }

    void BankAccount::deposit(double amount) {
        if (amount > 0) {
            *balance += amount;
            std::cout << "Deposit amount " << amount << " RON done. The actual balance is " << *balance << " RON." << std::endl;
        } else {
            std::cout << "The deposit amount should be more than zero." << std::endl;
        }
    }

    // Metoda pentru a efectua o retragere din cont
    void BankAccount::withdraw(double amount) {
        if (amount > 0 && amount <= *balance) {
            *balance -= amount;
            std::cout << "Withdrawal amount of " << amount << " RON done. The actual balance is " << *balance << " RON." << std::endl;
        } else if (amount > *balance) {
            std::cout << "Insufficient funds for the withdrawal." << std::endl;
        } else {
            std::cout << "The withdrawal amount should be more than zero." << std::endl;
        }
    }

    // Metoda pentru a afișa informațiile despre cont
    void BankAccount::displayAccountInfo() const {
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Actual balance: " << *balance << " RON" << std::endl;
    }

}