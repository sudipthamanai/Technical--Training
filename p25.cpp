#include <iostream>
using namespace std;
void evenodd(int a)
{
	(a/2==2*(a/2))? (cout<<("even")): (cout<< ("odd"));
}
int main()
{
	int x;
	cin>>x;
	evenodd(x);
	return 0; 
}

