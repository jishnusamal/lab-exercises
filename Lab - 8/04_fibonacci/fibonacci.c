#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("fib(%d) = %d", n, fib(n));
}

int fib(int n) {
    if (n<=1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}