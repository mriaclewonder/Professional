#include "Person.h"

Person::Person(std::string firstName, std::string lastName)
    : m_firstName(std::move(firstName)),
      m_lastName(std::move(lastName)) {}

Person::Person(std::string firstName, std::string lastName,
               std::string initials)
    : m_firstName(std::move(firstName)),
      m_lastName(std::move(lastName)),
      m_initials(std::move(initials)) {}

std::string const &Person::getFirstName() const {
    return m_firstName;
}

std::string const &Person::getLastName() const {
    return m_lastName;
}

std::string const &Person::getInitials() const {
    return m_initials;
}

void Person::setFirstName(std::string firstName) {
    m_firstName = std::move(firstName);
}

void Person::setLastName(std::string lastName) {
    m_lastName = std::move(lastName);
}

void Person::setInitials(std::string initials) {
    m_initials = std::move(initials);
}
