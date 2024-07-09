#include <iostream>
#include <string>

bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int main() {
    std::string str;
    std::cout << "Enter the line: ";
    std::getline(std::cin, str);

    int letters = 0, digits = 0, others = 0;
    for (char ch : str) {
        if (isLetter(ch)) {
            letters++;
        }
        else if (isDigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }

    std::cout << "Letters: " << letters << ", Numbers: " << digits << ", Other characters: " << others << std::endl;
    return 0;
}