#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
char* withoutSplChars(char*s, int len)
{
	char *y=(char*)malloc(len*sizeof(char));
	int i;
	int k=0;
	for(i=0;i<len;i++)
	{
		if((isalnum(s[i]) || isspace(s[i])))
		{
		
		y[k]=s[i];
		k++;
	}
	}
	y[k]='\0';
	return y;
}
int main()
{
	int i, n=0;
	char *p=(char*)malloc(1000*sizeof(char));
	cin.getline(p,1000);
	
	for(i=0;p[i]!='\0';i++)
	{
	n++;
	}
			p=(char*)realloc(p,n*sizeof(char));
			char *q=withoutSplChars(p,n);
			cout<<q;
			
	return 0;
}
