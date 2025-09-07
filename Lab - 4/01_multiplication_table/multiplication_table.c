#include <stdio.h>

int main(){
    int n,k;

    printf("Enter tables to write: ");
    scanf("%d", &k);

    printf("Enter steps: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=k; j++) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}
