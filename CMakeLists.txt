cmake_minimum_required(VERSION 3.7)
project(Homework_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Contact.cpp Contact.h PhoneBook.cpp PhoneBook.h)
add_executable(Homework_3 ${SOURCE_FILES})