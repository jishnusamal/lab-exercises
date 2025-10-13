#include <stdio.h>
#include <math.h>

int main() {
    int m, n, trace = 0, norm = 0, op, n1, n2, temp;

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

    printf("Interchange: \n1. Row \n2. Column \n");
    scanf("%d", &op);

    switch (op) {
    case 1:
        printf("Enter rows to interchange: ");
        scanf("%d %d", &n1, &n2);
        n1 -= 1; n2 -= 1;

        for (int j = 0; j<n; j++) {
            temp = a[n1][j];
            a[n1][j] = a[n2][j];
            a[n2][j] = temp;
        }
        break;

    case 2:
        printf("Enter columns to interchange: ");
        scanf("%d %d", &n1, &n2);
        n1 -= 1; n2 -= 1;

        for (int j = 0; j<m; j++) {
            temp = a[j][n1];
            a[j][n1] = a[j][n2];
            a[j][n2] = temp;
        }
        break;

    default:
        printf("Invalid Option");
        break;
    }

    // Print matrix
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
