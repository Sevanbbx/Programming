/*#include <iostream>

int num = 0;

int* arrayFunc() {
    std::cout << "num = ";
    std::cin >> num;
    int* arr = new int[num];
    for (int i = 0; i < num; i++) {
       std::cout << "arr[" << i << "]=";
       std::cin >> arr[i];
    }
    std::cout << "arr = ";
    return arr;
}

int main() {
    int* arr = arrayFunc();
    for (int i = 0; i < num; i++) {
        std::cout << "arr[" << i << "]=" << arr[i] << std::endl;
    } 
    return 0;
}*/

#include <iostream>

void foo() {
    int m = 0;
    static int n = 0;
    m++;
    n++;
    std::cout << "m = " << m << std::endl;
    std::cout << "n = " << n << std::endl;
}

int main() {
    foo();
    foo();
    foo();
    int n = 10;
    return 0;
}
