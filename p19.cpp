#include <iostream>
#include <time.h>
using namespace std;
	int randm (int x)
	{
	
		x=(rand()%100)+1;
	}
int main()
{
	int a,n,x;
	cin>>a;
	cin>>n;
  x= randm(a,n)
	return 0;
}
