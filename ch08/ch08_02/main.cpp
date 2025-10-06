#include "Person.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {
    Person p("John", "Doe");
    std::cout << p.getFirstName() << " " << p.getLastName() << std::endl;

    // Person *p1 = new Person("Marc", "Gregoire");
    std::unique_ptr<Person> p1 = std::make_unique<Person>("Marc", "Gregoire");
    std::cout << p1->getFirstName() << " " << p1->getLastName() << std::endl;
    Person persons[3];
    return 0;
}
