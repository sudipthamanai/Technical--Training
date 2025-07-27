#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    z = (sin(x) + cos(x) + tan(2 * x)) / log10(pow(x, 4));
    printf("Result (Expression 4): %.4lf\n", z);
    return 0;
}

