#include <iostream>
#define maximum(x,y) ((x > y) ? x : y)
#define c 5
#if c < 5
	#define signal 1
	int i = 10;
#else 
	#define signal 0
	int i = 100;
#endif
using namespace std;
int q();
int main()
{
	int a, b;
	q();
	cin>>a>>b;
	cout<<maximum(a,i);
	signal;
	cout<<"Hello, World!";
	return 0;
}
