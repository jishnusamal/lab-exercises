#include <stdio.h>

int main(){
    int n, a[20];

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int is_prime = 1;
        for (int j = 2; j < n; j++) {
            if (a[i]%j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d is prime.\n", a[i]);
        }
    }



}
