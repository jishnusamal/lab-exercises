#include <stdio.h>
#include <math.h>

int main() {
    int num, prime = 0, composite = 0;

    do {
        int i=2, is_prime = 1;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 1) {
            break;
        }
        while (i <= sqrt(num)) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
        if (is_prime) {
            prime++;
        } else {
            composite++;
        }
    } 
    while (num != 1);
    printf("Prime numbers: %d\n", prime);
    printf("Composite numbers: %d\n", composite);

}
