#include <iostream>
using namespace std;
int main() 
{ 
    try  
    { 
        int a; 
        cout<<"\nWhat is lesser than five?\n"; 
        cin>>a; 
        if (a>=5) throw a;
        float a1; 
        cout<<"\nWhat is lesser than five?\n"; 
        cin>>a1; 
        if (a1>=5) throw a1;
 
    } 
    catch (int) 
    { 
        cout<<"\nWrong!\n"; 
        return 0; 
    } 
    catch (float) 
    { 
        cout<<"\nWrong1111111111111111!\n"; 
        return 0; 
    } 
    cout<<"\nCorrect!\n"; 
    return 0; 
} 
