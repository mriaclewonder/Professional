#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    explicit Person(std::string const &firstName, std::string const &lastName);

    std::string const &getFirstName() const;
    void setFirstName(std::string const &firstName);
    std::string const &getLastName();
    void setLastName(std::string const &lastName);

private:
    std::string m_firstName;
    std::string m_lastName;
};

#endif
