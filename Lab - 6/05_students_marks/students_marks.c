#include <stdio.h>
#include <math.h>

int main() {
    int n, m = 2;

    printf("Enter no of students (row col): ");
    scanf("%d",&n);

    int students_marks[m][n];

    // Fill matrix
    for (int j = 0; j < n; j++) {
        students_marks[0][j] = j+1;
        printf("Student %d Marks: ", j+1);
        scanf("%d", &students_marks[1][j]);

    }

    // Print matrix
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("%d\t", students_marks[i][j]);
        }
        printf("\n");
    }
}

