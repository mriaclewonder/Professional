#include "employee.h"
#include <iostream>
#include <vector>

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

    std::vector<HR::employee> vec;
    vec.push_back(ManagerEmployee);
    vec.push_back(SeniorEngineerEmployee);
    vec.push_back(EngineerEmployee);

    for (auto it = vec.begin(); it != vec.end(); it++) {
        std::cout << " " << it->employeeNumber << " " << it->firstInitial << " "
                  << it->lastInitial << " " << it->salary << " "
                  << (int)it->title << std::endl;
    }

    for (int i = 0; i < vec.size(); i++) {
        std::cout << " " << vec[i].employeeNumber << " " << vec[i].firstInitial
                  << " " << vec[i].lastInitial << " " << vec[i].salary << " "
                  << (int)vec[i].title << std::endl;
    }
    return 0;
}
