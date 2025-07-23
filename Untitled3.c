#include <stdio.h>
int main()
{
int r,c,i,j;
printf("enter the value of r and c:");
scanf("%d  %d",&r,&c);
int a[r][c];
for(i=j;i<r;i++)
{
	for(j=0;j<=i;j++)
	{
	scanfr("%d",&a[i][j]);
}
}
for(i=j;i<r;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
return 0;
}
