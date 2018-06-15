#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"num = "; while(cin >> num){
    if (num % 2 == 1) {cout<<1<<endl;}
    if (num % 4 == 2) {cout<<2<<endl;}
    if (num % 8 == 4) {cout<<3<<endl;}
    if (num % 8 == 0) {cout<<4<<endl;}
    if (num % 24 == 6) {cout<<5<<endl;}}
    cout << endl;
}
