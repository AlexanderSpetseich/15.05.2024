#include <iostream>
#include <string>

void replacement(std::string& str) {
    for (char& ch : str) {
        if (ch == '.') {
            ch = '!';
        }
    }
}

int main() {
    std::string str;
    std::cout << "Enter the line: ";
    std::getline(std::cin, str);
    replacement(str);
    std::cout << "Result: " << str << std::endl;
    return 0;
}