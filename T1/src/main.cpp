#include "BankAccount.hpp"
#include <iostream>

using namespace BankAccounts;
using namespace std;

int main() {
    BankAccount myAccount("242546", "Emily Swift", 1000.0);

    cout << "Initial account information:" << endl;
    myAccount.displayAccountInfo();

    myAccount.deposit(700.0);
    myAccount.withdraw(200.0);

    cout << "\nUpdated account information:" << endl;
    myAccount.displayAccountInfo();

    return 0;
}
