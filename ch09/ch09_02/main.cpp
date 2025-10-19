#include "Person.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Person person{"John", "Doe"};

    Person persons[3];

    // Test copy constructor.
    Person copy{person};

    // Test assignment operator.
    Person otherPerson{"Jane", "Doe"};
    copy = otherPerson;
    return 0;
}
