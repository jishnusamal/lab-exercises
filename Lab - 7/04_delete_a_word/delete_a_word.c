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


    puts(str);
}
