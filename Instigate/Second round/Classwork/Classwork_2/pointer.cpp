#include <iostream>

int main() {
    int i = 9;
    int &m = i;
    std::cout << "i = " << i << std::endl;
    std::cout << "m = " << m << std::endl;
    i = 8;
    std::cout << "m = " << m << std::endl;
    return 0;
}
