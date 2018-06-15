#include <iostream>
using namespace std;
int main()
{
    int num, max_sum, saved_i;
    cout<<"num = "; cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"arr["<<i<<"]="; cin>>arr[i];
    }
    max_sum = arr[0] + arr[1];
    for (int i = 1; i < num-1; i++)
    {
        if (max_sum <= arr[i] + arr[i+1])
        {
            max_sum = arr[i] + arr[i+1];
            saved_i = i;
        }
    }
    cout << "The indexes are: " << saved_i << " and " << saved_i+1;
    return 0;
}
