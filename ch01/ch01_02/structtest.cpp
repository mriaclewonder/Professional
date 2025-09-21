#include "employee.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    HR::employee anemployee{
        .firstInitial = 'J',
        .lastInitial = 'D',
        .employeeNumber = 40,
        .salary = 80000,
        .title = HR::Title::Manager};

    std::cout << (int)anemployee.title << std::endl;
    return 0;
}
