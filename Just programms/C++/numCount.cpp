#include <iostream>
 
int main() {
 
    int length = 0;
    int amount = 0;
    std::string str;
    std::cout << "Input your text beelow:" << std::endl;
    getline (std::cin,str);
    length = str.size();
    std::cout << length << "\n"; 
    for (int i = 0; i < length; ++i){
        if(char(str[i]) >= 48 && char(str[i]) <= 57){
            ++amount;
        }
    } 
    std::cout << "The amount of numbers is " << amount << std::endl; 
    return 0;
}
