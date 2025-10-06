#include "Person.h"
#include <iostream>

Person::Person(std::string const &firstName, std::string const &lastName)
    : m_firstName(firstName),
      m_lastName(lastName) {}

Person::Person(Person const &src)
    : m_firstName(src.m_firstName),
      m_lastName(src.m_lastName) {
    std::cout << "Person copy constructor called." << std::endl;
}

Person &Person::operator=(Person const &src) {
    std::cout << "Person assignment operator called." << std::endl;
    if (this != &src) {
        m_firstName = src.m_firstName;
        m_lastName = src.m_lastName;
    }
    return *this;
}

Person::~Person() {
    std::cout << "Person destructor called." << std::endl;
}

std::string const &Person::getFirstName() const {
    return m_firstName;
}

void Person::setFirstName(std::string const &firstName) {
    m_firstName = firstName;
}

std::string const &Person::getLastName() {
    return m_lastName;
}

void Person::setLastName(std::string const &lastName) {
    m_lastName = lastName;
}
