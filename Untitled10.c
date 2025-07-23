#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
	int i, j, n, count =0;
	char s[100];
	scanf("%[^\n]s",&s);
	
	for(i=o; s[i]!='\0';i++)
	{
		n=0;
		if(isdigit(s[i]))
		{
			n=s[i]-'0';
			for(j=i+1;s[j]!='\0';j++)
			{
				if(isdigit (s[j]))
				{
					n=n*10+s[j]-'0';
				}
					else
					{
						i=j;
						break;
					}
				}
			}
		}	 } 
	 for(i=2;i<=sqrt(n);i++)
	 {
	 	if(n%i==0)
	 	count++;
	 }
	 if(count==0)
	 {
	 	printf(" prime");
	 	 }
	 	 else
	 	 {
	 	 	printf(" not prime");
		  }
return;
}
