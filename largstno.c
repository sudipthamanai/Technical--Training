#include <stdio.h>

int main() {
    int num1, num2, largest;

    // Input
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Using ternary operator to find the largest
    largest = (num1 > num2) ? num1 : num2;

    // Output
    if (num1 == num2)
        printf("Both numbers are equal: %d\n", num1);
    else
        printf("Largest number is: %d\n", largest);

    return 0;
}

