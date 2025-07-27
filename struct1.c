#include <stdio.h>

struct Student
 {
    char name[50];
    int mark1, mark2, mark3;
    float average;
}s;

int main() {
    
	printf("Enter student name: ");
    scanf("%s", s.name); 

    printf("Subject 1: ");
    scanf("%d", &s.mark1);
    printf("Subject 2: ");
    scanf("%d", &s.mark2);
    printf("Subject 3: ");
    scanf("%d", &s.mark3);

   
    s.average = (s.mark1 + s.mark2 + s.mark3) / 3.0;


    printf("\n Student Details \n");
    printf("Name: %s\n", s.name);
    printf("Marks: %d, %d, %d\n", s.mark1, s.mark2, s.mark3);
    printf("Average: %.2f\n", s.average);

    return 0;
}

    
