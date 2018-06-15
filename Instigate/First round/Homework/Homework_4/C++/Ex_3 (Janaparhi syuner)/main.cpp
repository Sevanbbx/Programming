/*#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter 2 positive numbers"<<endl;
    while (cin>>num1>>num2)
    {
        int amount=0;
        if ((num1 < 0) || (num2 < 0)) {cout<<"Error: Please enter positive numbers"; return 0;}
        for (num1; num1<=num2; num1++)
        {
            if (num1 % 7 == 3)
            {
                amount++;
            }
        }
        cout<<"amount = "<<amount<<endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin>>num1>>num2;
    if ((num1 < 0) || (num2 < 0)) {cout<<"Error: Please enter positive numbers"; return 0;}
    if (num2 < 3) {cout<<0<<endl; return 0;}
    if (num1%7<=3)
    {
        cout<<((num2+4)/7) - ((num1+4))/7 +1; return 0;
    }
    else {cout<<((num2+4)/7) - (num1+4)/7); return 0;}

}
