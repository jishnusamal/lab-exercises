#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int is_palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str) - 1;
    for (int i = 0; i<n/2; i++){
        if (str[i] != str[n-i-1]) {
            is_palindrome = 0;
            break;
        }
    }

    (is_palindrome == 1) ? printf("It is a palindrome!"): printf("Oops! It is not a palindrome!");
}
