#include <stdio.h>
#include <math.h>
int  main()
{
	int n,r,i,count=0,sum=0,j,temp;
	printf("enter the value of n: ");
	scanf("%d",&n);
	temp=n;
	for(i=2;i<sqrt(sum);i++)
	{
		if (n%i == 0)
		{
			count++;
		}
		if(count ==0)
		{
			while (n>0)
			{
				r=n%10;
				sum=sum+r;
				n=n/10;
			}
			for(j=2;j<=sqrt(sum);j++)
			{
				if(sum%i==0)
				count++;
			}
			if (count==0)
			{
				if (sum == 2||3||5||7)
				{
					printf("perfect prime");
				}
			}
		}
		else
		{
			printf("not pefect prime");
		}
	
}
return 0;
}
