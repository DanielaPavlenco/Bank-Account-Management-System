cmake_minimum_required(VERSION 3.0)

project(MyTemplateClassApp)

set(SOURCES
    MyTemplateClass.cpp
    MyTemplateClass.hpp
)

add_library(MyTemplateClass ${SOURCES})
