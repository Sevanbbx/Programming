#include <iostream>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    std::cout << "num1 = ";
    std::cin >> num1;
    std::cout << "num2 = ";
    std::cin >> num2;
    std::cout << num1 << " + " << num2 << " = " << sum(num1, num2) << std::endl;
    return 0;
}
