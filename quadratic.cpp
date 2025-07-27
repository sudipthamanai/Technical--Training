#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, z1, z2;
	cin>>a>>b>>c;
z1= (-b + sqrt(pow(b,2)- 4*a*c))/2*a;
z2= (-b - sqrt(pow(b,2)-4*a*c))/2*a;
cout<< " The value of the equation  "<<z1<<endl;
cout<< " The value of the equation  "<<z2<<endl;
return 0;

}
