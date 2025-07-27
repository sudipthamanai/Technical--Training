#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    z = sqrt(log(x) + pow(M_E, 4)) / log10(pow(x, 1));
    printf("Result (Expression 3): %.4lf\n", z);
    return 0;
}

