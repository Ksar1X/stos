cmake_minimum_required(VERSION 3.26)
project(project)

set(CMAKE_CXX_STANDARD 14)

include_directories(stos)
include_directories(stos/Exceptions)

add_executable(project
        stos/Exceptions/InvalideItemException.h
        stos/Exceptions/StackException.h
        stos/Exceptions/StackOverflowException.h
        stos/Exceptions/StackUnderflowExecption.h
        stos/IStack.h
        stos/main.cpp
        stos/Stack.h)
