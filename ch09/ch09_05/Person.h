#pragma once

#include <format>
#include <string>
#include <utility>

class Person {
public:
    explicit Person(std::string firstName, std::string lastName)
        : m_firstName{std::move(firstName)},
          m_lastName{std::move(lastName)} {}

    Person() = default;

    explicit Person(std::string firstName, std::string lastName,
                    std::string initials)
        : m_firstName{std::move(firstName)},
          m_lastName{std::move(lastName)},
          m_initials{std::move(initials)} {}

    std::string const &getFirstName(Person const &self) {
        return self.m_firstName;
    }

    std::string &&getFirstName(Person &&self) {
        return std::move(self.m_firstName);
    }

    void setFirstName(std::string firstName) {
        m_firstName = std::move(firstName);
    }

    std::string const &getLastName(Person const &self) {
        return self.m_lastName;
    }

    std::string &&getLastName(Person &&self) {
        return std::move(self.m_lastName);
    }

    void setLastName(std::string lastName) {
        m_lastName = std::move(lastName);
    }

    std::string const &getInitials(Person const &self) {
        return self.m_initials;
    }

    std::string &&getInitials(Person &&self) {
        return std::move(self.m_initials);
    }

    void setInitials(std::string initials) {
        m_initials = std::move(initials);
    }

private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_initials;
};
