#include <iostream>

int main() {
    int n = 50;
    const int* i = &n;
    int *const j = &n;
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    (*i)++;
    (*j)++;
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    return 0;
}
