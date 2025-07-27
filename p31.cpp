#include <iostream>
using namespace std;
void evenodd(int a)
{
while(a%2==0)
{
	cout<<("even");
	break;
}
while(a%2!=0)
{
	cout<<("odd");
	break;
}
}
int main()
{
	int x;
	cin>>x;
	evenodd(x);
	return 0; 
}
