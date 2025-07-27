#include<iostream>
using namespace std;
void swapno (int a, int b, int c)
{
c= a;
a=b;
b= c;
	cout<<a<<endl<<b;
}
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	swapno(a,b,c);
	return 0;
}
