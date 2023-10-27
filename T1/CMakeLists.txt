cmake_minimum_required(VERSION 3.10)
project(T1)  

# Set the source directory
set(SOURCES src/BankAccount.cpp)

# Add the executable
add_executable(BankAccount ${SOURCES})

# Set the include directory for header files
target_include_directories(BankAccount PRIVATE src)
