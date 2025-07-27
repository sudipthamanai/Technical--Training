#include <stdio.h>
#include <math.h>
int main()
{
	int n , i ,j,sum=0;
	printf("enter the value of n ");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = a[i][i]+a[i][n-i-1];
				
		}
		printf("%d",sum);
		printf("\n");
	}
	return 0;
}
