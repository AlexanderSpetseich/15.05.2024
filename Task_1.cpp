#include <iostream>
#include <string>

int main() {
    std::string str;
    char ch;

    std::cout << ": ";
    std::getline(std::cin, str);

    std::cout << ": ";
    std::cin >> ch;

    // Исправленный цикл для удаления всех вхождений символа
    for (size_t i = 0; i < str.size(); ) {
        if (str[i] == ch) {
            str.erase(i, 1);
        }
        else {
            ++i;
        }
    }

    std::cout << ": " << str << std::endl;

    return 0;
}
