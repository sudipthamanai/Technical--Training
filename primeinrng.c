#include <stdio.h>

int main() {
    int s, e, i, j, isPrime;

    // Input start and end values
    printf("Enter the starting number (s): ");
    scanf("%d", &s);

    printf("Enter the ending number (e): ");
    scanf("%d", &e);

    // Basic validation
    if (s < 2)
        s = 2;  // Since prime numbers start from 2

    printf("Prime numbers between %d and %d are:\n", s, e);

    // Loop through all numbers from s to e
    for (i = s; i <= e; i++) {
        isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

