#include <stdio.h>

int cornerSum(int m, int n, int matrix[m][n]);

int main() {
    int m, n, sum = 0;

    printf("Enter dimensions (row col): ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("a[%d][%d]: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    sum = cornerSum(m, n, a);
    printf("Corner Sum = %d", sum);
}

int cornerSum(int m, int n, int matrix[m][n]) {
    int sum = matrix[0][0] + matrix[0][n-1] + matrix[m-1][0] + matrix[m-1][n-1];
    return sum;
}