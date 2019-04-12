cmake_minimum_required(VERSION 3.13)
project(PC1)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC1 main.cpp TwoLinkedList.cpp LinkedList.cpp LinkedList.h TwoLinkedList.h cmake-build-debug/LinkedList.cpp cmake-build-debug/LinkedList.h LinkedList.cpp LinkedList.h)