#include <iostream>

int& f(int& x, int &y) {
    return x > y ? x : y;
}

int main() {
    int a = 5;
    int b = 17;
    f(a, b) = 7;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    return 0;
}
