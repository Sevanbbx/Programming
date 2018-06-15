#include <iostream>

int maxOfNum (int num, int max_copy) {
    int max = max_copy;
    if (num) {
        int dig = num % 10;
        if (dig > max) {
            max = dig; 
        }
        maxOfNum(num / 10, max);
    } else {
        return max;
    }
}

int minOfNum (int num, int min_copy) {
    int min = min_copy;
    if (num) {
        int dig = num % 10;
        if (dig < min) {
            min = dig;
        }
        minOfNum(num / 10, min);
    } else {
        return min;
    }
}

int main() {
    int num;
    int firstDig;
    std::cout << "num = ";
    std::cin >> num;
    firstDig = num % 10;
    std::cout << "Min dig of " << num << " is " << minOfNum(num, firstDig) << std::endl;
    std::cout << "Max dig of " << num << " is " << maxOfNum(num, firstDig) << std::endl; 
    return 0;
}
