#include "Person.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Person person{"John", "Doe"};
    std::cout << person.getFirstName() << " " << person.getLastName()
              << std::endl;
    std::cout << "" << std::endl;

    Person person2{"Marc", "Gregoire", "Mg"};

    std::cout << person.getFirstName() << " " << person.getLastName() << " "
              << person2.getInitials() << std::endl;
    std::cout << "" << std::endl;

    Person persons[3];

    // Test copy constructor.
    Person copy{person};

    // Test assignment operator.
    Person otherPerson{"Jane", "Doe"};
    copy = otherPerson;

    // Test comparison operators.
    if (person < person2) {
        std::cout << ("person < person2") << std::endl;
    }
    if (person > person2) {
        std::cout << ("person > person2") << std::endl;
    }
    if (person <= person2) {
        std::cout << ("person <= person2") << std::endl;
    }
    if (person >= person2) {
        std::cout << ("person >= person2") << std::endl;
    }
    if (person == person2) {
        std::cout << ("person == person2") << std::endl;
    }
    if (person != person2) {
        std::cout << ("person != person2") << std::endl;
    }
    return 0;
}
