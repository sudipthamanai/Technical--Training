#include<stdio.h>
int addition (int a,int b)
{
	int c;
	c = a+b;
	return c;
}
int subtraction  (int a, int b)
{
	int c;
	c = a-b;
	return c;
}
int multiplication (int a , int b)
{
	int c;
	c = a*b;
	return c;
}
int division (int a , int b)
{
	int c;
	c = a/b;
	return c;
}
int main()
{
int x,y,z;
printf("enter the number u want to add");
scanf("%d %d",&x,&y);
z = addition (x,y);
printf("addition = %d",z);

printf("enter the number u want to subtract");
scanf("%d %d",&x,&y);
z = subtraction (x,y);
printf("subtraction = %d",z);


printf("enter the number u want to multiply");
scanf("%d %d",&x,&y);
z = multiplication (x,y);
printf("multiplication = %d",z);

printf("enter the number u want to divide");
scanf("%d %d",&x,&y);
z = division (x,y);
printf("division = %d",z);
return 0;
	
}
