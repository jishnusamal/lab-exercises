#include <stdio.h>

void averageCalc(int n, int p, int students_marks[4][n], int average[2][n]);

int main() {
    int n, m = 4, p = 2;

    printf("Enter no of students: ");
    scanf("%d",&n);

    int students_marks[m][n];
    int average[p][n];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            average[i][j] = 0;
        }
    }



    // Fill matrix
    for (int j = 0; j < n; j++) {
        students_marks[0][j] = j+1;
        printf("Student %d Marks: ", j+1);
        scanf("%d %d %d", &students_marks[1][j], &students_marks[2][j], &students_marks[3][j]);

    }

    averageCalc(n, p, students_marks, average);

    for (int j = 0; j < n; j++) {
        printf("Student %d - Marks: %d, %d, %d | Avg: %d\n",
            students_marks[0][j],
            students_marks[1][j],
            students_marks[2][j],
            students_marks[3][j],
            average[1][j]
        );
    }
}

void averageCalc(int n, int p, int students_marks[4][n], int average[2][n]) {
    for (int j = 0; j < n; j++) {
        int total = students_marks[1][j] + students_marks[2][j] + students_marks[3][j];
        average[0][j] = students_marks[0][j];
        average[1][j] = total / 3;
        
    }
}
