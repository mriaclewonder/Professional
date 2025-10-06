#include "Person.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {
    Person person2{"Marc", "Gregoire", "Mg"};
    std::cout << person2.getFirstName() << " " << person2.getLastName() << " "
              << person2.getInitials() << std::endl;
    ;
    return 0;
}
