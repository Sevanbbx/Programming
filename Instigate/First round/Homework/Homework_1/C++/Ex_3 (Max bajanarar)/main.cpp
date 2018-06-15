#include <iostream>
using namespace std;
int evklid(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if (a>b)
        {
            a %= b;
        }
        else {b %= a;}
    }
    return a+b;
}
int main()
{
    int n_1, n_2, n_3;
    cin>>n_1>>n_2>>n_3;
    cout<<evklid(evklid(n_1, n_2),n_3);

    return 0;
}
