#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main() {
    double number, result;

    // Input a positive number
    printf("Enter a positive number: ");
    scanf("%lf", &number);

    // Check if the number is positive
    if (number < 0) {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
    } else {
        // Use sqrt() function
        result = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, result);
    }

    return 0;
}

