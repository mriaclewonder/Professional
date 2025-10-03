#include <iostream>

void fillWithM(char *text) {
    int i{0};
    while (text[i] != '\0') {
        text[i] = 'm';
        ++i;
    }
}

void fillWithM1(std::string &text) {
    for (auto &c: text) {
        c = 'm';
    }
}

int main(int argc, char const *argv[]) {
    std::string str = "aaa aa aaaa";
    std::cout << str << std::endl;
    fillWithM1(str);
    std::cout << str << std::endl;
    return 0;
}
