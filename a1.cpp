#include <iostream>
#include <ctype.h>
using namespace std;
int countmiss(char*s)
{
	int count=0,i;
	for(i=0;s[i]!='\0';i++)
	{
		if(!(isspace(s[i]) || isalnum(s[i])))
		count++;
		}
		return count;
	}
int main()
{
	char s[20];
	int c;
	cin>>s;
	c=countmiss(s);
	cout<<c;
	}
