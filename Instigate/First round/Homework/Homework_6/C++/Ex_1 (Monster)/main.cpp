#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    if (a>100 || b>100 || c>100 || d>100 || a*b*c*d<=0) {return 0;}
    for (int i=1; i<=100; i++)
    {
        for (int j=1; j<=100; j++)
        {
            if (b+a*i == d+j*c) {cout<<b+a*i; return 0;}

        }
    }
    cout<<"Չի կարող բռնել";
    return 0;
}
