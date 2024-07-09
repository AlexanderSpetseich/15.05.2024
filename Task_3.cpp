#include <iostream>
#include <string>

void insertChar(std::string& str, int index, char ch) {
    // Проверяем, что индекс находится в пределах строки
    if (index >= 0 && index < str.size()) {
        str.insert(index, 1, ch);
    }
    else {
        std::cout << "Invalid index." << std::endl;
    }
}

int main() {
    std::string str;
    int index;
    char ch;

    std::cout << "Enter the line: ";
    std::getline(std::cin, str);

    std::cout << "Enter the position to insert the character: ";
    std::cin >> index;
    std::cout << "Enter the character to insert: ";
    std::cin >> ch;

    insertChar(str, index, ch);

    std::cout << "Result: " << str << std::endl;

    return 0;
}