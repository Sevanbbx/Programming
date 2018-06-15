/*#include <iostream>
#include <string>

int main() {
    std::string language = "";
    std::cout << "Input language :";
    std::cin >> language;
    if (language == "hy") {
        std::cout << "Բա ՜րև, Տուքս" << std::endl;
        return 0;
    }
    if (language == "en") {
        std::cout << "Hello, Tux!" << std::endl;
        return 0;
    }
    if (language == "ru") {
        std::cout << "Привет, Тукс!" << std::endl;
        return 0;
    } 
    if (language == "hy") {
        std::cout << "Բա րև, Տուքս" << std::endl;
        return 0;
    }
    if (language == "ch") {
        std::cout << "Tux，你好！" << std::endl;
        return 0;
    } else {
        std::cout << "Bye, Tux!" << std::endl;
        return 0;
    } 
    return 0;
}*/ 

#include <iostream>

int main() {
    char ln = ' ';
    std::cout << "Please enter your language: 'hy' or 'en' or 'ru' or 'ch'";
    std::cout << "Input language: ";
    std::cin >> ln;
    switch(ln) {
        case 'h':
            std::cout << "Բա ՜րև, Տուքս" << std::endl;
            break;
        case 'e':
            std::cout << "Hello, Tux!" << std::endl;
            break;
        case 'r':
            std::cout << "Привет, Тукс!"  << std::endl;
            break;
        case 'c':
            std::cout << "Tux，你好！" << std::endl;
            break;
        default:
            std::cout << "Bye, Tux!" << std::endl;
    }
    return 0;
}
