#include <iostream>

union date {
    int year[5];
    int month;
    int day;
    char s;
} time1, time2;

int main() {
    std::cout << "Enter <year1> <month> <day> \n";
    //std::cin >> time1.year >> time1.month >> time1.day;
    std::cout << "Enter <year2> <month> <day> \n";
    //std::cin >> time2.year >> time2.month >> time2.day;    
    std::cout << sizeof(date) << std::endl;
    return 0;
}
