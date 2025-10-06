#include "Person.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {
    Person p("John", "Doe");

    Person copy(p);

    Person otherPerson("Jane", "Doe");
    copy = otherPerson;
    return 0;
}
