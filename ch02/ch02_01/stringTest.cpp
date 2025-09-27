#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    std::cout << "First string:" << std::endl;
    std::string s;
    getline(std::cin, s);

    std::cout << "Second string:" << std::endl;
    std::string s1;
    getline(std::cin, s1);

    // ? s < s1
    if (std::is_lt(s <=> s1)) {
        std::cout << s << "\n" << s1 << std::endl;
    } else {
        std::cout << s1 << "\n" << s << std::endl;
    }
    return 0;
}
