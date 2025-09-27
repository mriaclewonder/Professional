#include <iostream>
#include <string>

/// @brief 输入一个字符串haystack，将所有的needle替换成repalcement
/// @param haystack
/// @param needle
/// @param replacement
/// @return 替换后的整个字符串
std::string replaceString(std::string const &haystack,
                          std::string const &needle,
                          std::string const &replacement) {
    std::string result = haystack;
    auto position = result.find(needle);
    while (position != std::string::npos) {
        result.replace(position, needle.length(), replacement);
        position = result.find(needle, position + replacement.size());
    }
    return result;
}

int main(int argc, char const *argv[]) {
    std::string haystack;
    std::cout << "Enter source string:\n";
    getline(std::cin, haystack);
    std::string needle;
    std::cout << "Enter string to find:\n";
    getline(std::cin, needle);

    std::string replacement;
    std::cout << "Enter replacement string:\n";
    getline(std::cin, replacement);

    std::string result = replaceString(haystack, needle, replacement);

    std::cout << "Haystack: " << haystack << std::endl;
    std::cout << "Needle: " << needle << std::endl;
    std::cout << "Replacement: " << replacement << std::endl;
    std::cout << "Result: " << result << std::endl;
    return 0;
}
