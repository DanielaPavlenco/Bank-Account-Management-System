#pragma once //prevedem includerea multipla a acestui fisier

#include <string>

namespace BankAccounts {

    class BankAccount {
    public:
        //Constructorul clasei BankAccount
        BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance);

        // Destructorul clasei BankAccount (marcat ca virtual pentru a permite suprascrierea în clasele derivate)
        virtual ~BankAccount();  // Marcam destructorul ca fiind virtual

        // Constructorul de mutare (move constructor) pentru clasa BankAccount
        BankAccount(BankAccount&& other) noexcept;

        // Metoda virtuală pentru a efectua un depozit în cont
        virtual void deposit(double amount);  // Marcam deposit ca fiind virtual

         // Metoda virtuală pentru a efectua o retragere din cont
        virtual void withdraw(double amount);  // Marcam withdraw ca fiind virtual

        // Metode pentru a obține numărul de cont, titularul și soldul // gettere - metode de acces
        const std::string& getAccountNumber() const;
        const std::string& getAccountHolder() const;
        double getBalance() const;

          // Metode pentru a seta numărul de cont și titularul  // settere- metode de modificare
        void setAccountNumber(const std::string& accNumber);
        void setAccountHolder(const std::string& accHolder);

        // Metodă pentru a afișa informațiile despre cont
        void displayAccountInfo() const;
    private:
        std::string accountNumber;
        std::string accountHolder;

        double* balance; // Soldul contului este stocat ca un pointer 
                        //către un număr dublu pentru a permite gestionarea în heap
    };

}
