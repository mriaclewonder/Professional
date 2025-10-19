#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(/* args */) = default;

    explicit Person(std::string firstName, std::string lastName);
    explicit Person(std::string firstName, std::string lastName,
                    std::string initials);

    ~Person();

    std::string const &getFirstName() const;
    std::string const &getLastName() const;
    std::string const &getInitials() const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setInitials(std::string initials);

    bool operator==(Person const &other) const;
    bool operator!=(Person const &other) const;
    bool operator<(Person const &other) const;
    bool operator>(Person const &other) const;
    bool operator<=(Person const &other) const;
    bool operator>=(Person const &other) const;

private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_initials;
};

#endif
