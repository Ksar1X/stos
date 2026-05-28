cd#pragma once
#include "StackException.h"

class StackUnderflowException : public StackException {
public:
    StackUnderflowException() : StackException("Stack underflow: attempt to access element from an empty stack") {}
};