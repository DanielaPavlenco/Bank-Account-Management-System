#pragma once
#include <iostream>
#include <array>  // Sau orice alt container STL pe care dorești să îl folosești

namespace ArrayUtil {
    template <typename T, size_t N>
    void printArray(std::array<T, N>& arr) {
        for (const auto& element : arr) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
    }
}