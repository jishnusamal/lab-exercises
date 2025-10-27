#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100], newStr[100][100];
    int i = 0, j = 0, n = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';

    printf("Enter a substring to be deleted: ");
    fgets(substr, sizeof(substr), stdin);
    if (substr[strlen(substr) - 1] == '\n') substr[strlen(substr) - 1] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            newStr[n][j++] = str[i];
        } else {
            // i++
            if (str[i] == ' ' || str[i] == '\0') {
                newStr[n][j++] = '\0';
            }
            j = 0;
            n++;
            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }
    
    char temp[100] = "";

    for (int j = 0; j < n; j++) {
        if(strcmp(newStr[j], substr) == 0) {
            n--;
            for (int k = j; k < n; k++) {
                strcpy(newStr[k], newStr[k+1]);
            }
        }
    }


    for (int l = 0; l < n; l++) {
        strcat(temp, newStr[l]);
        strcat(temp, " ");
    }

    strcpy(str, temp);
    puts(str);
}
