#include "MyTemplateClass.hpp"

// Implementarea constructorului
template <typename T>
MyTemplateClass<T>::MyTemplateClass(T value) : data(value) {}

// Implementarea metodei getValue()
template <typename T>
T MyTemplateClass<T>::getValue() {
    return data;
}

