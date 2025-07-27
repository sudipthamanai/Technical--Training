#include <iostream>
using namespace std;
void larofto(int a, int b)
{
	int largest;
	largest=(a>b)? a:b;
	cout<< "The greatest number is :";
	cout<<largest;
}
int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	larofto(x,y);
	return 0; 
}

