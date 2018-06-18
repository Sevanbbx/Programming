#include <iostream>
#include <cmath>

bool isPrime(long long num) {
    for(long long i = 2; i< sqrt(num) + 0.0001;) {
        if(0 == num % i) {            
            return false;
        } else {
            i++;
        }
    }
    return true;
}

int main() {
    long long num1 = 0;
    long long num2 = 0;
    long long numBig = 0;
    long long numSmall = 0;
    std::cout << "To finish the program, input 'OK'" << std::endl;
    while(std::cout << "\ninput 2 integer numbers: ", std::cin >> num1 >> num2) {
        if (num1 < 0 || num2 < 0) {
            std::cout << "Input only positive numbers" << std::endl;
            continue;
        }
        long long saved = 0;
        if(num1 > num2) {
            numBig = num1;
            numSmall = num2;
        } else {
            numBig = num2;
            numSmall = num1;
        }
        if(isPrime(numBig)) {
            std::cout << numBig << " ";
        }
        if(isPrime(numSmall) && 0 != numBig % numSmall) {
            std::cout << numSmall << " ";
        }
        for(long long i = 1; i < sqrt(numBig) + 0.0001;) {
            if(isPrime(i) && i != saved && 0 == numBig % i && 0!= numSmall % i) {
                std::cout << i << " ";
                saved = i;
                numBig /= i;
            } else {
                i++;
            }
        }
    }
    return 0;
}

