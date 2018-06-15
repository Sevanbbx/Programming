#include <iostream>
#include <string>

int main() {
    std::string little = "abcdefghijklmnopqrstuwxyz";
    std::string big = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    char sign = ' ';
    std::cout << "sign = ";
    std::cin >> sign;
    for (int i = 0; i < 26; i++) {
        if (sign == little[i] || sign == big[i]) {
            std::cout << "Helo, Tux!" << std::endl;
            return 0;
        }
    }
    std::cout << "Bye, Tux!" << std::endl;
    return 0;
}

