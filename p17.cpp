#include<iostream>
using namespace std;
void swapno (int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<endl<<b;
}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	swapno(a,b);
	return 0;
}
