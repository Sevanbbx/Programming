#include <iostream>

int &preIncrease(int &num) {
    return num += 1;
}

int postIncrease(int* num) {
    int psevdoNum = *num;
    *num += 1;
    return psevdoNum;
}
int main() {
    int num;
    std::cout << "num = ";
    std::cin >> num;
    int *pNum = &num;
    int var = preIncrease(num);
    std::cout << "++i = " << var << std::endl;
    std::cout << "i = " << &num << std::endl;
    std::cout << "i++ = " << postIncrease(pNum) << std::endl;
    std::cout << "i = " << num << std::endl;    
}

/*#include <iostream>

int preIncrease(int  num) {
    return num+1;
}

int postIncrease(int num) {
    int* psevdoNum = &num;
    *psevdoNum += 1;
    return num;
}
int main() {
    int num;
    std::cout << "num = ";
    std::cin >> num;
    int* pNum = &num;
    std::cout << "++i = " << preIncrease(num) << std::endl;
    std::cout << "i++ = " << postIncrease(num) << std::endl;
}*/
