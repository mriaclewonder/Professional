#pragma once

#include <memory>
#include <string>

class Person {
public:
    Person();
    explicit Person(std::string firstName, std::string lastName);
    explicit Person(std::string firstName, std::string lastName,
                    std::string initials);

    ~Person();

    Person(Person const &src);
    Person(Person &&) noexcept;
    Person &operator=(Person const &src);
    Person &operator=(Person &&) noexcept;

    std::string const &getFirstName() const;
    std::string const &getLastName() const;
    std::string const &getInitials() const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setInitials(std::string initials);

private:
    class Impl;
    std::unique_ptr<Impl> m_impl;
};
