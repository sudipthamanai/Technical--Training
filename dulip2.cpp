/* you will be givenan array with 'n' number of elements then delete all the duplicate elements and return an array that contains unique
 elements*/
 #include <iostream>
 #include <stdlib.h>
using namespace std;
int n;
int* uniquearray(int *x)
{
    int *y=(int*)malloc(n*sizeof(int));
	int i,flag,count=0,j;
	for (i=0;i<n;i++)
	{
	     flag = 1;
	     for(j=0;j<count;j++)
	     {
	     	if(x[i]==y[j])
	     	flag =0;
	     	break;
		 }
		 if(flag==1)
		 y[count]=x[i];
		 count++;
	}
	n=count;
	y=(int*)realloc(y,count*sizeof(int));
	return y;
}
int main()
{
	int *p,*q,i;
	cin>>n;
	p=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		cin>>p[i];
	}
	q=uniquearray(p);
	for(i=0;i<n;i++)
	{
		cout<<q[i]<<"\t";
	}
	
return 0;	
}
