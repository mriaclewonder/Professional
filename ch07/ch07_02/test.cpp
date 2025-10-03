#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::size_t const numberOfElement = 10;

    // int *value = new int[numberOfElement];
    // for (int index = 0; index < numberOfElement; ++index) {
    //     value[index] = index;
    // }

    // value[10] = 99;

    // std::cout << std::endl;
    // for (int index = 0; index < numberOfElement; ++index) {
    //     std::cout << " " << value[index];
    // }
    // std::cout << std::endl;

    std::vector<int> vec;
    for (int index = 0; index < numberOfElement; ++index) {
        vec.push_back(index);
    }

    vec.back() = 99;

    for (auto num: vec) {
        std::cout << " " << num << std::endl;
    }
    return 0;
}
