#include<iostream>
using namespace std;
int rarea (int l, int b)
{
	return l*b;
}
int main()
{
	int x,y,z;
	cin>>x;
	cin>>y;
	z=rarea(x,y);
	cout<<z;
	return 0;
}
