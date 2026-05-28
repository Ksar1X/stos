#pragma once
#include "StackException.h"

class StackOverflowException : public StackException {
public:
    explicit StackOverflowException(int maxSize) : StackException("Stack overflow: maximum capacity of " + std::to_string(maxSize) + " elements reached") {}
};