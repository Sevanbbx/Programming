#include <iostream>

inline int max(int a, int b) {
    return a > b ? a : b;
}

int main(){
    int num1 = 0;
    int num2 = 0;
    std::cout << "num1 = ";
    std::cin >> num1;
    std::cout << "num2 = ";
    std::cin >> num2;
    std::cout << "Max of " << num1 << " and " << num2 << " is " << max(num1, num2);
} 
