#include <iostream>
#include <string>

int main() {
    std::string str;
    char ch;
    std::cout << "Enter the line: ";
    std::getline(std::cin, str);
    std::cout << "Enter a character: ";
    std::cin >> ch;

    int count = 0;
    for (char c : str) {
        if (c == ch) {
            ++count;
        }
    }

    std::cout << "The symbol '" << ch << "' occurs " << count << " once" << std::endl;
    return 0;
}