#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2,y2, x3, y3, x0, y0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cin>>x0>>y0;
    if ((x0>x1 && x0>x2 && x0>x2) || (x0<x1 && x0<x2 && x0<x2))
        {cout<<"Չի պատկանում";}
    else if ((y0>y1 && y0>y2 && y0>y3) || (y0<y1 && y0<y2 && y0<y3))
        {cout<<"Չի պատկանում";}
    else {cout<<"պատկանում է";}
    return 0;
}
