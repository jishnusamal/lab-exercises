#include <stdio.h>

int fact(int n);

int main() {
    float c;
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    c = fact(n)/(fact(r)*fact(n-r));

    printf("%dC%d = %.2f", n, r, c);
}

int fact(int n) {
    int fact = 1;
    for (int i = 1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}