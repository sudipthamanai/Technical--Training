#include <stdio.h>
int main ()
{
	int c , r , i ,j;
	printf("enter the value of r and c ");
	scanf("%d %d",&r,&c);
	int a[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d \t",a[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
