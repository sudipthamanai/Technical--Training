#include<iostream>
using namespace std;
int carea (int r)
{
	return 3.142*r*2;
}
int main()
{
	int x,y;
	cin>>x;
	y=carea(x);
	cout<<y;
	return 0;
}
