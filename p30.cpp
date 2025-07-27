#include <iostream>
using namespace std;
void evenodd(int a)
{
if(a%2==0)
{
	cout<<("even");
}
else
{
	cout<<("odd");
}
}
int main()
{
	int x;
	cin>>x;
	evenodd(x);
	return 0; 
}
