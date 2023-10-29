#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double *balance;  // Folosim un pointer la double pentru a permite gestionarea memoriei dinamică

public:
   // Constructor pentru a inițializa contul bancar
    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance);

    // Destructor pentru a elibera memoria din heap
    ~BankAccount();

    // Copy constructor
    BankAccount(const BankAccount& other);

    // Operator de atribuire
    BankAccount& operator=(const BankAccount& other);

    // Metode pentru a accesa datele private
    const std::string& getAccountNumber() const;
    const std::string& getAccountHolder() const;
    double getBalance() const;

    // Metodă pentru a efectua un depozit în cont
    void deposit(double amount);

    // Metodă pentru a efectua o retragere din cont
    void withdraw(double amount);

    // Metodă pentru a afișa informațiile despre cont
    void displayAccountInfo();
};

#endif
