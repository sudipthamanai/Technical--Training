# include<stdio.h>

int addition (int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int subtraction (int a, int b)
{
	int c;
	c=a-b;
	return c;
}
int multiplication (int a, int b)
{
	int c;
	c=a*b;
	return c;
}
int division (int a, int b)
{
	int c;
	c=a/b;
	return c;
}

    int main()
    {
    	int x,y,z;
    	scanf("%d %d",&x,&y);
    	z=addition (x,y);
    	printf("\n addition=%d", z);
    
    
    
    
    	scanf("%d %d",&x,&y);
    	z=subtraction (x,y);
    	printf("\n substraction=%d", z);
    
    
    
    
    	scanf("%d %d",&x,&y);
    	z=multiplication (x,y);
    	printf("\n multiplication=%d", z);
    
    
    
    	scanf("%d %d",&x,&y);
    	z=division (x,y);
    	printf("\n division=%d", z);
    	return 0;
    }
    
    	

