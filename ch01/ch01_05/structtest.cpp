#include "employee.h"
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<HR::employee> vec;

    vec.push_back(HR::employee{.firstName = "Jin",
                               .lastName = "Dong",
                               .employeeNumber = 40,
                               .salary = 80000,
                               .title = HR::Title::Manager});

    vec.push_back(HR::employee{.firstName = "Lin",
                               .lastName = "Iin",
                               .employeeNumber = 80,
                               .salary = 10000,
                               .title = HR::Title::SeniorEngineer});

    vec.push_back(HR::employee{.firstName = "Xu",
                               .lastName = "Xiao",
                               .employeeNumber = 80,
                               .salary = 10000,
                               .title = HR::Title::Engineer});

    // std::vector<HR::employee> vec;
    //  vec.push_back(ManagerEmployee);
    //  vec.push_back(SeniorEngineerEmployee);
    //  vec.push_back(EngineerEmployee);

    for (auto it = vec.begin(); it != vec.end(); it++) {
        std::cout << " " << it->employeeNumber << " " << it->firstName << " "
                  << it->lastName << " " << it->salary << " " << (int)it->title
                  << std::endl;
    }

    for (int i = 0; i < vec.size(); i++) {
        std::cout << " " << vec[i].employeeNumber << " " << vec[i].firstName
                  << " " << vec[i].lastName << " " << vec[i].salary << " "
                  << (int)vec[i].title << std::endl;
    }
    return 0;
}
