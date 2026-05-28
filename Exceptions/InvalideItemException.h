#pragma once
#include "StackException.h"

class InvalideItemException : public StackException {
public:
    InvalideItemException() : StackException("Invalid item: attempt to push a null pointer onto the stack") {}
};