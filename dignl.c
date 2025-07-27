#include <stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		
		for (j=0;j<n;j++)
		{
			if(a[i][j]!=a[i][j])
		    flag=1;
		}
	}
	if(flag==0)
	{
		printf("summetric");
	}
	else
	{
		printf("not symmetric");
	}
	return 0;
}
