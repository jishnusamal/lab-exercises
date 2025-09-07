#include <stdio.h>

int main() {
    int n, sum=0, i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i < n) {
        if (n%i==0) {
            sum += i;
            // printf("%d\n", i);
        }
        i++;
    }

    // printf("%d %d\n", sum, n);

    (sum == n) ? printf("It's a perfect number!") : printf("Oops! It's not a perfect number.");

}