#include <stdio.h>

int main(){
    int a, b, c, smallest;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    smallest = (a<b) ? ((a<c) ? a : c) : ((b<c) ? b : c);

    printf("%d is the smallest among %d, %d & %d", smallest, a, b, c);
}
