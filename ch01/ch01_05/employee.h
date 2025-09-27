#pragma once
#include <string>

namespace HR {
enum class Title {
    Engineer,
    SeniorEngineer,
    Manager
};

struct employee {
    std::string firstName;
    std::string lastName;
    int employeeNumber;
    int salary;
    Title title;
};
} // namespace HR
