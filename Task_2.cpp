#include <iostream>
#include <string>

int main() {
    std::string str;
    char ch;

    std::cout << "Enter the line: ";
    std::getline(std::cin, str);

    std::cout << "Enter the character to delete: ";
    std::cin >> ch;

    for (size_t i = 0; i < str.size(); ) {
        if (str[i] == ch) {
            str.erase(i, 1);
        }
        else {
            ++i;
        }
    }

    std::cout << "Result: " << str << std::endl;

    return 0;
}