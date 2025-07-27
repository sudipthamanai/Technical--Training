#include <stdio.h>
void func(int *p)
{
	*p=20;
}
int main()
{
	int x = 10;
	func(&x);
	printf("(%d)",x);
	return 0;
}
