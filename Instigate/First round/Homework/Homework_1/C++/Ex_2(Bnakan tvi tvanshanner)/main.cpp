#include <iostream>
using namespace std;

void print_digits(unsigned val)
{
    if(val) {
        unsigned digit = val % 10;
        print_digits(val / 10);
        cout << digit << ' ';
    }
}

int main() {
    unsigned val;
    while(cin >> val) print_digits(val), cout << endl;

    return 0;
}
