#include <stdio.h>


int main()
{
	char s[20];
	printf("Enter the value:");
	scanf("%[^\n]s",s);
	int i, count=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
		{
		
		printf("%c\t", s[i]);
	}
}
	count++;
	return 0;
}

