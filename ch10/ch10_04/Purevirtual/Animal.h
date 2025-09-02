#pragma once
#include <iostream>

class Animal {
public:
    Animal() = default;
    virtual ~Animal() = default;
    virtual void setString(std::string name) = 0;
    virtual std::string getName() const = 0;
};
