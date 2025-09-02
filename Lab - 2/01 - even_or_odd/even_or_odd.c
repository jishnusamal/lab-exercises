#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    float ed = num%2 ? (printf("%d is odd", num)) : (printf("%d is even", num));
    return 0;
}
