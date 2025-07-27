#include <iostream>
#include <stdlib.h>
using namespace std;
int n;
int* uniqueArray (int *x)
{
	int *y=(int*)malloc(n*sizeof(int));
	int i,j, flag,count=0;
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<count;j++)
		{
			if(x[i]==y[j])
			flag=0;
			break;
		}
		if(flag==1)
		y[count]=x[i];
		count++;
	}
	n=count;
	y=(int*)realloc(y,count*sizeof(int));
	return y;
}
int main()
{
	int *p, *q,i;
	cin>>n;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		
	}
	q=uniqueArray(p);
	for(i=0;i<n;i++)
	{
		cout<<q[i]<<"\t";
	}
	return 0;
}
