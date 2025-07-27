#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    z = (log(x) + log10(x) + exp(x)) / sqrt(4);
    printf("Result (Expression 1): %.4lf\n", z);
    return 0;
}

