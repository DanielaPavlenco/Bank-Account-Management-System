cmake_minimum_required(VERSION 3.0)

project(BankAccountApp)

set(SOURCES
    main.cpp
    BankAccount.cpp
    BankAccount.hpp
    SavingsAccount.cpp
    SavingsAccount.hpp
    Transaction.hpp
)

add_executable(BankAccount ${SOURCES})
