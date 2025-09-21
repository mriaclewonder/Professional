#include "employee.h"
#include <array>
#include <iostream>

int main(int argc, char const *argv[]) {
    HR::employee ManagerEmployee{.firstInitial = 'J',
                                 .lastInitial = 'D',
                                 .employeeNumber = 40,
                                 .salary = 80000,
                                 .title = HR::Title::Manager};

    HR::employee SeniorEngineerEmployee{.firstInitial = 'L',
                                        .lastInitial = 'I',
                                        .employeeNumber = 80,
                                        .salary = 10000,
                                        .title = HR::Title::SeniorEngineer};

    HR::employee EngineerEmployee{.firstInitial = 'X',
                                  .lastInitial = 'U',
                                  .employeeNumber = 80,
                                  .salary = 10000,
                                  .title = HR::Title::Engineer};

    std::array<HR::employee, 3> arr{ManagerEmployee, SeniorEngineerEmployee,
                                    EngineerEmployee};
    for (int i = 0; i < arr.size(); i++) {
        std::cout << " " << arr[i].employeeNumber << " " << arr[i].firstInitial
                  << " " << arr[i].lastInitial << " " << arr[i].salary << " "
                  << (int)arr[i].title << std::endl;
    }
    return 0;
}
