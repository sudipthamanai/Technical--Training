#include<stdio.h>
#include<string.h>
int main()
{
	char sd[200];
	printf("enter your address: ");
	scanf("%[^\n]s",sd);
	printf("\n student address = %s",sd);
	return 0;
}
