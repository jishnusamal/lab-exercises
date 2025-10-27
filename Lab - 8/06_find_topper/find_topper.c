#include <stdio.h>
#include <string.h>

void averageCalc(int n, int p, int students_marks[4][n], int average[2][n]);
int findTopper(int n, int average[2][n]);

int main() {
    int n, m = 4, p = 2;

    printf("Enter no of students: ");
    scanf("%d",&n);
    getchar();

    int students_marks[m][n], average[p][n];
    char student_names[n][100];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            average[i][j] = 0;
        }
    }



    // Fill matrix
    for (int j = 0; j < n; j++) {
        printf("\nStudent %d\n", j+1);
        students_marks[0][j] = j+1;
        printf("Name: ");
        fgets(student_names[j], sizeof(student_names[j]), stdin);
        if (student_names[j][strlen(student_names[j]) - 1] == '\n') student_names[j][strlen(student_names[j]) - 1] = '\0';

        printf("Marks: ");
        scanf("%d %d %d", &students_marks[1][j], &students_marks[2][j], &students_marks[3][j]);
        getchar();

    }

    averageCalc(n, p, students_marks, average);


    for (int j = 0; j < n; j++) {
        printf("%s - Marks: %d, %d, %d | Avg: %d\n",
            student_names[j],
            students_marks[1][j],
            students_marks[2][j],
            students_marks[3][j],
            average[1][j]
        );
    }


    findTopper(n, average);
    printf("Topper: %s", student_names[average[0][0]-1]);

    
}


// Calculate Average of all students
void averageCalc(int n, int p, int students_marks[4][n], int average[2][n]) {
        for (int j = 0; j < n; j++) {
            int total = students_marks[1][j] + students_marks[2][j] + students_marks[3][j];
            average[0][j] = students_marks[0][j];
            average[1][j] = total / 3;
            
        }
}


// Find topper
int findTopper(int n, int average[2][n]) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = n - i - 1;
        for (int j = 0; j < n - i - 1; j++) {
            if (average[1][j] < average[1][minIndex]) {
                minIndex = j; // Found smaller average
            }
        }

        int last = n - i - 1;

        // Swap averages
        int tempAvg = average[1][i];
        average[1][last] = average[1][minIndex];
        average[1][minIndex] = tempAvg;

        // Swap student roll / ID
        int tempRoll = average[0][i];
        average[0][last] = average[0][minIndex];
        average[0][minIndex] = tempRoll;
    }

    return average[0][0];
}