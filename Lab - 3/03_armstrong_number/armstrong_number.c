#include <stdio.h>
#include <math.h>

int main() {
    int num, armstrong = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int num1 = num;

    while (num > 0) {
        armstrong += pow(num%10, 3);
        num /= 10;
    }

    // printf("%d is the sum of cubes of the number\n", armstrong);
    (num1 == armstrong) ? printf("It's an armstrong number!"): printf("Oops! It's not an armstrong number!");
}
