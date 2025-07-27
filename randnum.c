#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x,n;
	srand(time(0));
	x = (rand()%100)+1;
    
	while(1)
	{
	printf("\n enter your number: ");
	scanf("%d",&n);
	if (n>x)
	{
		printf("it is greater than generated number: ");
	
	}
	else if (n<x)
	{
		printf("it is smaller than generated number: ");
	}
    else 
    {
    	printf(" the number is correct: ");
    	break;
	}
    }
    return 0;
}

