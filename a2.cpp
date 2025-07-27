#include <iostream>
using namespace std;
int factorial (int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
f=f*i;
}
return f;
}

int countTrailingZeros(int x)
{
int count= 0;
int y= factorial(x);
cout<<"factorial is = "<<y<<endl;
while(y%10==0)
{
	count++;
	y=y/10;
}
return count;

}
int main()
{
	int x;
	int f;
	
	cout<<"Enter a number";
	cin>>x;
	f = countTrailingZeros(x);
	cout<<"Trailing zeros are = " << f;
	return 0;
}
