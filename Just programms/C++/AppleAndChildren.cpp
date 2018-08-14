#include <iostream>

int main(){
    int n = 0;
    int k = 0;
    unsigned int result = 0;
    std::cin >> n >> k;
    result = (n - (k % n)) % n;
    std::cout << result << std::endl;
    return 0;
}
