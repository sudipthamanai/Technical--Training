#include <iostream>
#include <math.h>
using namespace std;
float maths (float x, float y )
{
	float z;
	float r;
	r = exp(x);
	z=(log10 (r) + log(sqrt(y)))/(sin(x) + r + pow(x,y));
	return z;
}
int main () 
{
	float a,b;
	cin>>a;
	cin>>b;
	float res;
	res = maths(a,b);
	cout<<res;
	return 0;

}
