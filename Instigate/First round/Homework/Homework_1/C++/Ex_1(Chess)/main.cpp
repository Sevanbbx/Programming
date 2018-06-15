#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int X_1, Y_1, X_2, Y_2, X_1_copy, Y_1_copy, X_2_copy, Y_2_copy, X_var, Y_var;
    cin>>X_1>>Y_1;
    cin>>X_2>>Y_2;
    if ((X_1==X_2 && Y_1==Y_2) || (0>X_1>8) || (0>X_2>8) || (0>Y_1>8) || (0>Y_2>8)) {cout<<"ERROR: The pieces are on each other or out of board \nplease enter various numbers betwen 1 and 8";}
    X_1_copy = X_1;
    Y_1_copy = Y_1;
    X_2_copy = X_2;
    Y_2_copy = Y_2;
    X_var = X_1-X_2;
    Y_var = Y_1-Y_2;
    if ((X_1 == X_2) || (Y_1==Y_2) || (abs(X_var) == abs(Y_var))) {cout<<"Queen wins !!"<<endl;;}
    if ((abs(X_var)==1 && abs(Y_var)==2) || (abs(X_var)==2 && abs(Y_var)==1)) {cout<<"Knight wins !!"<<endl;}
    else {cout<<"No one wins"<<endl;}
}
