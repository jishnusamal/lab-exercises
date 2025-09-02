#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int num1 = num;

    while (num > 0) {
        rev = rev*10 + num%10;
        num /= 10;
    }

    printf("%d is the reverse of the number\n", rev);
    (num1 == rev) ? printf("It's palindrome!"): printf("Oops! It's not palindrome");
}
