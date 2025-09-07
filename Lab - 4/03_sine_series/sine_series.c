#include <stdio.h>
#include <math.h>

int factorial (int n);
int main() {
    float x, sine = 0, m = 1;
    int n;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    x = x*(3.142857/180);

    for (int i = 1; i<=n; i=i+2) {
        //printf("%d\n", m);
        sine +=  (float) (m*pow(x, i))/factorial(i);
        m *= -1;
    }
    printf("sin(%.3f) = %.3f", x, sine);
}

int factorial (int n) {
    int fact = 1;
    for (int i = 1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
