#include <stdio.h>

int main() {
    int range, i;

    // Input
    printf("Enter the upper range: ");
    scanf("%d", &range);

    printf("Even numbers from 1 to %d are:\n", range);

    // Looping from 1 to range
    for (i = 1; i <= range; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

