#include <iostream>
using namespace std;
void smallof(int a, int b)
{
	int smallest;
	smallest=(a<b)? a:b;
	cout<< "The smallest number is :";
	cout<<smallest;
}
int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	smallof(x,y);
	return 0; 
}

