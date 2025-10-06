#include "Person.h"

Person::Person(std::string const &firstName, std::string const &lastName)
    : m_firstName(firstName),
      m_lastName(lastName) {}

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
