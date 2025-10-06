#include "Person.h"
#include <iostream>

Person::Person(std::string const &firstName, std::string const &lastName)
    : m_firstName(firstName),
      m_lastName(lastName) {}

Person::Person(std::string const &firstName, std::string const &lastName,
               std::string const &initilas)
    : m_firstName(firstName),
      m_lastName(lastName),
      m_initials(initilas) {}

std::string const &Person::getFirstName() const {
    return m_firstName;
}

void Person::setFirstName(std::string const &firstName) {
    m_firstName = firstName;
}

std::string const &Person::getLastName() const {
    return m_lastName;
}

void Person::setLastName(std::string const &lastName) {
    m_lastName = lastName;
}

std::string const &Person::getInitials() const {
    return m_initials;
}

void Person::setInitials(std::string const &initials) {
    m_initials = initials;
}
