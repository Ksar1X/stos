#pragma once
#include <stdexcept>
#include <string>

class StackException : pubic std::runtime_error {
public:
    explicit StackException(const std::string& message) : std::runtime_error(message) {}
};