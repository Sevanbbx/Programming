#include <iostream>

int main()
{

        float num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        while (num >= 1) {
            if (1 == num){
                std::cout << "That's an integer" << std::endl;
                return 0; 
            } else {
                num -= 1;
            }
        }
        std::cout << "That's NOT an integer" << std::endl;


   return 0;
}
