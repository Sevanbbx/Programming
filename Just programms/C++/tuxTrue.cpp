#include <iostream>

int main() {
    char sign = '';
    std::cout << "sign = ";
    std::cin >> sign;
    bool a = (97 <= sign) && (sign <= 122 );
    bool b = (65 <= sign) && (sign <= 90 );
        std::cout << "a is " << a << std::endl;
        std::cout << "b is " << b << std::endl;
    if (a|| b) {
        std::cout << "Hello, Tux!" << std::endl;
        return 0;
    }
    std::cout << "Bye, Tux!" << std::endl;
    return 0;
}
