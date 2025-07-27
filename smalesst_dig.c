#include<stdio.h>
#include<math.h>

int main()
{
	int n,m,i,j,temp;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the value of m: ");
	scanf("%d",&m);
	int a[n];
	printf("enter the array elements for a[n]: ");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	int b[m];
	printf("enter the array elements for b[m]: ");
	for(j=0;j<m;j++)
	{
		
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if (a[i]==b[j])
			{
				temp = a[i];
				a[i]=b[j];
				b[j] - temp;
			}
		}
	}
	printf("%d",a[i]);
	
	
	return 0;
}
