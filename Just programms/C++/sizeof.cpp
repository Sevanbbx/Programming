#include <iostream>

int main() {
    short int num1 = 1;
    int num2 = 2;
    long int num3 = 3;
    long long int num4 = 4;
    float num5 = 5.0;
    double num6 = 6.0;
    int * num7 = &num2;
    std::cout << "short int num1 = " << num1 << " size = " << sizeof(num1) << std::endl;
    std::cout << "int num2 = " << num2 << " size = " << sizeof(num2) << std::endl;
    std::cout << "long int num3 = " << num3 << " size = " << sizeof(num3) << std::endl;
    std::cout << "long long int num4 = " << num4 << " size = " << sizeof(num4) << std::endl;
    std::cout << "float num5 = " << num5 << " size = " << sizeof(num5) << std::endl;
    std::cout << "double num6 = " << num6 << " size = " << sizeof(num6) << std::endl;
    std::cout << "pointer num1 = " << num7 << " size = " << sizeof(num7) << std::endl;
}
