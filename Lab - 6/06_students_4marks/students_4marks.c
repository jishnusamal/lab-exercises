#include <stdio.h>
#include <math.h>

int main() {
    int n, m = 4;

    printf("Enter no of students: ");
    scanf("%d",&n);

    int students_marks[m][n];

    // Fill matrix
    for (int j = 0; j < n; j++) {
        students_marks[0][j] = j+1;
        printf("Student %d Marks: ", j+1);
        scanf("%d %d %d", &students_marks[1][j], &students_marks[2][j], &students_marks[3][j]);

    }

    // Print matrix
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("%d\t", students_marks[i][j]);
        }
        printf("\n");
    }
}

