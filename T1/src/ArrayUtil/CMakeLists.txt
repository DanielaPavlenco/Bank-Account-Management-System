cmake_minimum_required(VERSION 3.0)

project(ArrayUtil)

# Adaugarea executabilului
add_executable(ArrayUtil
    main.cpp
    ArrayUtil.cpp
    # alte fisiere .cpp aici
)

# Specificarea directorului pentru fișierele header
target_include_directories(ArrayUtil PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Link-ul cu biblioteca iostream și alte biblioteci necesare
target_link_libraries(ArrayUtil PUBLIC
    stdc++ # Sau alte biblioteci necesare
)