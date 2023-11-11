#include "ArrayUtil.hpp"
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};
    ArrayUtil::printArray(myArray);
    return 0;
}