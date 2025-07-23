#include <stdio.h>

struct student
{
	char name[50];
	int mark1, mark2, mark3;
	float average;
}a;
int main()
{
	printf ("Enter the student name:");
scanf("%d",&a.name)	;
printf("subject 1:");
scanf("%d",&a.mark1);
printf("subject 2:");
scanf("%d",&a.mark2);
printf("subject 3:");
scanf("%d",&a.mark3);


a.average=(a.mark1 +a.mark2+a.mark3)/3;

printf("\n name=%d",a.name);
printf("\n mark1=%d",a.mark1);
printf("\n mark2=%d",a.mark2);
printf("\n mark3=%d",a.mark3);
printf("\n average=%d",a.average);
return 0;
}
