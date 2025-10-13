#include <stdio.h>
#include <string.h>

int findSubstring (char str[], char substr[]);

int main() {
    char str[100], substr[100];
    int index = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a substring to be deleted: ");
    fgets(substr, sizeof(substr), stdin);

    int n = strlen(str);
    int m = strlen(substr);

    // Searching for first occurence of substr
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == m) {
            index = i;
        }
    }

    int k = index + m - 1;
    //printf("%d", k);
    for (int i = index; i < k; i++){
        str[i] = " ";
    }


    puts(str);
}
