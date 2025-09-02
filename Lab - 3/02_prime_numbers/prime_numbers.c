#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;

    printf("Enter a lower limit: ");
    scanf("%d", &num1);

    printf("Enter an upper limit: ");
    scanf("%d", &num2);

    int i = num1;
    while (i <= num2) {
        int is_prime = 1, j = 2, k = floor(sqrt(i));

        while (j <= k) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
            j++;
        }
        if (is_prime && i > 1) {
            printf("%d is a prime number.\n", i);
        }

        i++;
    }
}
