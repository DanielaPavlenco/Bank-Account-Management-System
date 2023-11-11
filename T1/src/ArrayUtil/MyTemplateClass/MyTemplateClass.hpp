//#include "MyTemplateClass.cpp"
#pragma once

template <class T>
class MyTemplateClass {
public:
    MyTemplateClass(T value);

    T getValue();

private:
    T data;
};
