#include <iostream>
using namespace std;
int main()
{
    int n;
    float average,sum, amount=0;
    cout<<"n="; cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]="; cin>>arr[i][j];
        }
    }
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i+j==n-1)
            {
                for (int q=1; q<=i; q++)
                {
                    sum += arr[i][j+q];
                    amount++;
                }
            }
        }
    }
    average = sum/amount;
    cout<<sum<<"/"<<amount<<" = "<<average;
    return 0;
}
