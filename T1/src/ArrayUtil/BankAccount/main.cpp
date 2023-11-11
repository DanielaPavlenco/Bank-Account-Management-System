#include "BankAccount.hpp"
#include "SavingsAccount.hpp"
#include <iostream>
#include <memory>

using namespace BankAccounts;
using namespace std;

int main() {
    // Utilizare de unique_ptr pentru BankAccount
    std::unique_ptr<BankAccount> uniqueAccount = std::make_unique<BankAccount>("242546", "Emily Swift", 1000.0);

    // Utilizare de shared_ptr pentru SavingsAccount
    std::shared_ptr<SavingsAccount> sharedSavings = std::make_shared<SavingsAccount>("123456", "John Doe", 5000.0, 0.05);

    cout << "Initial account information:" << endl;
    uniqueAccount->displayAccountInfo();
    sharedSavings->displayAccountInfo();

    uniqueAccount->deposit(700.0);
    uniqueAccount->withdraw(200.0);
    sharedSavings->deposit(1000.0);

    cout << "\nUpdated account information:" << endl;
    uniqueAccount->displayAccountInfo();
    sharedSavings->displayAccountInfo();

    return 0;
}