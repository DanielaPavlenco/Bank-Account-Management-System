#include "SavingsAccount.hpp"
#include <iostream>

namespace BankAccounts {

    // Constructor pentru clasa SavingsAccount
    SavingsAccount::SavingsAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance, double interestRate): BankAccount(accNumber, accHolder, initialBalance), interestRate(interestRate) {
        // Apelăm constructorul clasei de bază și inițializăm rata dobânzii
    }

    // Implementarea metodei deposit pentru conturile de economii
    void SavingsAccount::deposit(double amount) {
        if (amount > 0) {
            BankAccount::deposit(amount);  // Apelăm metoda din clasa de bază pentru a efectua depunerea
        } else {
            std::cout << "The deposit amount should be more than zero." << std::endl;
        }
    }

    // Implementarea metodei withdraw pentru conturile de economii
    void SavingsAccount::withdraw(double amount) {
        if (amount > 0 && amount <= getBalance()) {
            BankAccount::withdraw(amount);  // Apelăm metoda din clasa de bază pentru a efectua retragerea
        } else if (amount > getBalance()) {
            std::cout << "Insufficient funds for the withdrawal." << std::endl;
        } else {
            std::cout << "The withdrawal amount should be more than zero." << std::endl;
        }
    }

    // Implementarea metodei applyInterest pentru a aplica dobânda la soldul contului
    void SavingsAccount::applyInterest() {
        double interestAmount = getBalance() * interestRate;  // Calculăm dobânda
        deposit(interestAmount);  // Adăugăm dobânda la cont
    }

}