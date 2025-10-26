#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    printf("Enter dimension: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("a[%d][%d]: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (a[i][j] != a[j][i]) {
                printf("Not Symmetric");
                exit(0);
            }
        }
    }

    printf("Symmetric");
}
