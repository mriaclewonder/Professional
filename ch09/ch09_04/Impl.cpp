#include "Impl.h"

Person::Impl::Impl(std::string firstName, std::string lastName)
    : m_firstName(std::move(firstName)),
      m_lastName(std::move(lastName)) {}

Person::Impl::Impl(std::string firstName, std::string lastName,
                   std::string initials)
    : m_firstName(std::move(firstName)),
      m_lastName(std::move(lastName)),
      m_initials(std::move(initials)) {}

// 修正函数名
std::string const &Person::Impl::getFirstName() const {
    return m_firstName;
}

std::string const &Person::Impl::getLastName() const {
    return m_lastName;
}

std::string const &Person::Impl::getInitials() const {
    return m_initials;
}

void Person::Impl::setFirstName(std::string firstName) {
    m_firstName = std::move(firstName);
}

void Person::Impl::setLastName(std::string lastName) {
    m_lastName = std::move(lastName);
}

void Person::Impl::setInitials(std::string initials) {
    m_initials = std::move(initials);
}