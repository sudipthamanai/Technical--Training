#include <stdio.h>
#include <math.h>

int main() {
    double x, z;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    double cos4 = pow(cos(x), 4);
    double exp_x4 = exp(pow(x, 4));
    z = (log(cos4) + exp_x4) / pow(2, 4);
    printf("Result (Expression 5): %.4lf\n", z);
    return 0;
}

