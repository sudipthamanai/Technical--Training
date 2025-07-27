#include <iostream>
using namespace std;
void evenodd(int a)
{
	(a%2==0)? (cout<<("even")): (cout<< ("not even"));
}
int main()
{
	int x;
	cin>>x;
	evenodd(x);
	return 0; 
}
