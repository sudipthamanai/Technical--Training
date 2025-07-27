#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    z = sqrt(x) + pow(x, 4);
    printf("Result (Expression 6): %.4lf\n", z);
    return 0;
}

