#include <stdio.h>

int main(){
    int students[100], n, key, low = 0, high, mid = 0;

    printf("Enter no. of students: ");
    scanf("%d", &n);

    printf("Enter %d students: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i]);
    }

    // Sorting the array of student IDs in ascending order
    for (int i = 0; i < n-1; i++) {
        int pos = i, small = students[i];
        
        for (int j = i+1; j < n; j++) {
            if (students[j] < small) {
                small = students[j]; 
                pos = j;
            }
        }
        students[pos] = students[i];
        students[i] = small;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\t", students[i]);
    }

    printf("\n");

    printf("Enter a roll no to be searched: ");
    scanf("%d", &key);

    while (key != students[mid] && low <= high) {
        high = n;
        mid = (low + high)/2;

        if (key < students[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    if (key == students[mid]) {
        printf("%d is found at position %d", key, mid+1);
    }
}