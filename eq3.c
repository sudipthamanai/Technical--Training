#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    z = (sin(x) + cos(4)) / tan(x);
    printf("Result (Expression 2): %.4lf\n", z);
    return 0;
}

