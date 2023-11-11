#pragma once

#include "BankAccount.hpp"  // Includem fișierul cu clasa de bază

namespace BankAccounts {

   class SavingsAccount : public BankAccount {
    public:
        SavingsAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance, double interestRate);

        // Suprascriem metodele deposit și withdraw din clasa de bază
        void deposit(double amount) override;
        void withdraw(double amount) override;

        // Alte metode specifice SavingsAccount, inclusiv applyInterest
        void applyInterest();

    private:
        double interestRate;
    };

}