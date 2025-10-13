#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ') {
            printf("%c", str[i]);
            count++;
        }
    }

    printf("No. of words: %d", count);
}
