#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    explicit Person(std::string firstName, std::string lastName);

    Person() = default;
    ~Person();

    // copy
    Person(Person const &src);
    Person &operator=(Person const &src);

    // move
    Person(Person &&src) noexcept;
    Person &operator=(Person &&src) noexcept;

private:
    void swap(Person &other) noexcept;

public:
    std::string const &getFirstName() const;
    void setFirstName(std::string firstName);
    std::string const &getLastName();
    void setLastName(std::string lastName);

private:
    std::string m_firstName;
    std::string m_lastName;
};

#endif
