#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ar, ac, br, bc;

    printf("Enter dimensions (Matrix A): ");
    scanf("%d %d", &ar, &ac);

    printf("Enter dimensions (Matrix B): ");
    scanf("%d %d", &br, &bc);

    int a[ar][ac], b[br][bc], r[ar][bc];
    for (int i = 0; i < ar; i++)
        for (int j = 0; j < bc; j++)
            r[i][j] = 0;

    if (ac != br)
    {
        printf("Matrix Multiplication not possible.");
        return 0;
    }

    // Fill matrix
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            printf("a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            printf("b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            int prod = 0;
            for (int k = 0; k < ac; k++)
            {
                prod += a[i][k] * b[k][j];
            }
            // printf("r[%d][%d] = %d\t", i+1, j+1, prod);
            r[i][j] += prod;
            // printf("\n");
        }
    }

    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
