#include <stdio.h>

int main() {
    int n, sum, i = 1;

    printf("Enter n:");
    scanf("%d", &n);

    while (i < n) {
        if (n%i==0) {
            sum += i;
            printf("%d", i);
        }
        i++;
    }

    (sum == n) ? printf("It's a perfect number!") : printf("Oops! It's not a perfect number.");

}