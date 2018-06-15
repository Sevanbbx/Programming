#include <iostream>

void change(int &num1, int &num2) {
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    std::cout << "num1 = ";
    std::cin >> num1;
    std::cout << "num2 = ";
    std::cin >> num2;
    change(num1, num2);
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    return 0;
}

