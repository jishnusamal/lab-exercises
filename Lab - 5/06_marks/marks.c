#include <stdio.h>

int main()
{
    int marks[100], n, largest, pos;

    printf("Enter no. of marks: ");
    scanf("%d", &n);

    printf("Enter %d marks: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        largest = marks[i];

        for (int j = i + 1; j < n; j++)
        {
            if (marks[j] > largest)
            {
                largest = marks[j];
                pos = j;
            }
        }

        marks[pos] = marks[i];
        marks[i] = largest;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", marks[i]);
    }
}