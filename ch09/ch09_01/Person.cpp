#include "Person.h"
#include <iostream>

Person::Person(std::string firstName, std::string lastName)
    : m_firstName(std::move(firstName)),
      m_lastName(std::move(lastName)) {
    std::cout << "Person constructor called." << std::endl;
}

Person::~Person() {
    std::cout << "Person destructor called." << std::endl;
}

Person::Person(Person const &src)
    : m_firstName(src.m_firstName),
      m_lastName(src.m_lastName) {
    std::cout << "Person copy constructor called." << std::endl;
}

Person &Person::operator=(Person const &src) {
    std::cout << "Person assignment operator called." << std::endl;
    auto temp = src;
    swap(temp);
    return *this;
}

Person::Person(Person &&src) noexcept {
    std::cout << "Person move constructor called." << std::endl;
    swap(src);
}

Person &Person::operator=(Person &&src) noexcept {
    std::cout << "Person move assignment operator called." << std::endl;
    auto temp = std::move(src);
    swap(temp);
    return *this;
}

void Person::swap(Person &other) noexcept {
    std::swap(m_firstName, other.m_firstName);
    std::swap(m_lastName, other.m_lastName);
}

std::string const &Person::getFirstName() const {
    return m_firstName;
}

void Person::setFirstName(std::string firstName) {
    m_firstName = std::move(firstName);
}

std::string const &Person::getLastName() {
    return m_lastName;
}

void Person::setLastName(std::string lastName) {
    m_lastName = std::move(lastName);
}
