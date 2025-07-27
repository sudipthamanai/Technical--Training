#include <stdio.h>

int main() {
    int num1, num2, smallest;

    // Input
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Using ternary operator to find the smallest
    smallest = (num1 < num2) ? num1 : num2;

    // Output
    if (num1 == num2)
        printf("Both numbers are equal: %d\n", num1);
    else
        printf("Smallest number is: %d\n", smallest);

    return 0;
}

