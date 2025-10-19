#include "Person.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {
    Person person{"John", "Doe"};
    std::cout << person.getFirstName() << " " << person.getLastName()
              << std::endl;
    std::cout << "" << std::endl;

    Person persons[3];

    std::cout << "" << std::endl;

    // Test copy constructor.
    Person copy{person};

    std::cout << "" << std::endl;

    // Test assignment operator.
    Person otherPerson{"Jane", "Doe"};
    copy = otherPerson;

    std::cout << "" << std::endl;

    // Test move construction.
    Person movedToPerson{std::move(copy)};

    std::cout << "" << std::endl;

    // Test move assignment.
    movedToPerson = std::move(person);
    return 0;
}
