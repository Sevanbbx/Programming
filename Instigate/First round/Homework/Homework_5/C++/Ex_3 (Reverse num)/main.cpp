#include <iostream>
using namespace std;
int main()
{
    int num, digit;
    while (cin >> num)
    {
    int y = 0;
    while (num)
    {
        digit = num % 10;
        y = y * 10 + digit;
        num = num / 10;
    }
    cout<<y<<endl;}
    return 0;
}
