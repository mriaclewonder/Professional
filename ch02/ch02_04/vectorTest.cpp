#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<double> num;
    std::cout << "Input values, ona at a time followed by Enter. 0 to stop!\n";
    while (true) {
        double value;
        std::cin >> value;
        if (value == 0.0) {
            break;
        }
        num.push_back(value);
    }

    for (auto value: num) {
        std::cout << value << std::endl;
    }
    return 0;
}
