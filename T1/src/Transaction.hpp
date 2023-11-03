#pragma once

namespace BankAccounts {

    // Declarație a interfeței (clasei abstracte) Transaction
    class Transaction {
    public:
        // Metodă pur virtuală care trebuie implementată în clasele concrete
        virtual void execute() = 0;

        // Destructor implicit
        virtual ~Transaction() = default;
    };

}
