#include "Person.h"
#include "Impl.h" // 必须包含 Impl.h 来获取完整定义

Person::Person() : m_impl(std::make_unique<Impl>()) {}

Person::Person(std::string firstName, std::string lastName)
    : m_impl(
          std::make_unique<Impl>(std::move(firstName), std::move(lastName))) {}

Person::Person(std::string firstName, std::string lastName,
               std::string initials)
    : m_impl(std::make_unique<Impl>(std::move(firstName), std::move(lastName),
                                    std::move(initials))) {}

Person::~Person() = default;
Person::Person(Person &&) noexcept = default;
Person &Person::operator=(Person &&) noexcept = default;

Person::Person(Person const &src)
    : m_impl(std::make_unique<Impl>(*src.m_impl)) {}

Person &Person::operator=(Person const &src) {
    *m_impl = *src.m_impl;
    return *this;
}

std::string const &Person::getFirstName() const {
    return m_impl->getFirstName(); // 使用修正后的函数名
}

std::string const &Person::getLastName() const {
    return m_impl->getLastName();
}

std::string const &Person::getInitials() const {
    return m_impl->getInitials();
}

void Person::setFirstName(std::string firstName) {
    m_impl->setFirstName(std::move(firstName));
}

void Person::setLastName(std::string lastName) {
    m_impl->setLastName(std::move(lastName));
}

void Person::setInitials(std::string initials) {
    m_impl->setInitials(std::move(initials));
}
