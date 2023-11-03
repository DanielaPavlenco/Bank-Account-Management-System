cmake_minimum_required(VERSION 3.0)

project(BankAccountApp)

# Specificați toate fișierele sursă
file(GLOB SOURCES "src/*.cpp")

# Adăugarea executabilului
add_executable(BankAccount ${SOURCES})

# Specificarea directorului pentru fișierele header
target_include_directories(BankAccount PUBLIC "src")

# Link-ul cu biblioteca iostream
target_link_libraries(BankAccount PUBLIC "stdc++")
