#include <format>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<std::string> words;
    std::cout << "Input word, ona at a time followed by Enter. * to stop!\n";
    while (true) {
        std::string word;
        std::cin >> word;
        if (word == "*") {
            break;
        }
        words.push_back(word);
    }

    std::size_t longestWord = 0;
    for (auto const &word: words) {
        if (word.size() > longestWord) {
            longestWord = word.size();
        }
    }

    unsigned count{0};
    for (auto const &word: words) {
        std::cout << std::format("| {:^{}} ", word, longestWord);
        if (++count == 5) {
            std::cout << "|\n";
            count = 0;
        }
    }
    if (count != 0) {
        std::cout << "|\n";
    }
    return 0;
}
