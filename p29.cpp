#include <iostream>
using namespace std;
void posneg(int a)
{
	(a>0)? (cout<<("positive")): (cout<< ("negative"));
}
int main()
{
	int x;
	cin>>x;
	posneg(x);
	return 0; 
}
