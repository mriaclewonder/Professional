#pragma once
#include "Person.h"
#include <string>

class Person::Impl {
public:
    Impl() = default;
    explicit Impl(std::string firstName, std::string lastName);
    explicit Impl(std::string firstName, std::string lastName,
                  std::string initials);

    // 修正函数名：getIFirstName -> getFirstName
    std::string const &getFirstName() const;
    std::string const &getLastName() const;
    std::string const &getInitials() const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setInitials(std::string initials);

private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_initials;
};
