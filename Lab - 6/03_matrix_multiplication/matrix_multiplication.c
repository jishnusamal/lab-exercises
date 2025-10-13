#include <stdio.h>
#include <math.h>

int main() {
    int m, n, trace = 0, norm = 0;

    printf("Enter dimensions (row col): ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    // Fill matrix
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("a[%d][%d]: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }


}
