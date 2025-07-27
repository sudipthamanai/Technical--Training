#include<iostream>
using namespace std;
int tarea (int b, int h)
{
	return 0.5*b*h;
}
int main()
{
	int x,y,z;
	cin>>x;
	cin>>y;
	z=tarea(x,y);
	cout<<z;
	return 0;
}
