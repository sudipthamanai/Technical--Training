#include <stdio.h>
int main()
{
	int n , i ,j;
	printf("enter the value of n ");
	scanf("%d %d",&n);
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
			printf("%d \t",a[i][i]);	
		}
		printf("\n");
	}
	return 0;
}
