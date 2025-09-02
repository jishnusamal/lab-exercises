#include <stdio.h>

int main(){
    int n,k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=k; j++) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}
