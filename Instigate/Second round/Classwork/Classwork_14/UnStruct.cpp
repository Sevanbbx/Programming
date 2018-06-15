#include <iostream>

struct S {
    double a;
    int b;
    char c;
};

union U {
    int a;
    double b;
    char c;
};

int main() {
    S s;
    U u;
    std::cout << "Size of S is " << sizeof(S) << std::endl;
    std::cout << "Size of U is " << sizeof(U) << std::endl;
    std::cout << "Address of s.a is " << &s.a << std::endl;
    std::cout << "Address of s.b is " << &s.b << std::endl;
    std::cout << "Address of u.a is " << &u.a << std::endl;
    std::cout << "Address of u.b is " << &u.b << std::endl;
    return 0;
}
