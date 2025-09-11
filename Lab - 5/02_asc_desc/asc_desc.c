#include <stdio.h>

int main(){
    int n, num, asc[20], desc[20], ch;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        asc[i] = num;
        desc[i] = num;
    }

    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Order of Sorting (1/2): ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (asc[j] > asc[j+1]) {
                    int temp = asc[j];
                    asc[j] = asc[j+1];
                    asc[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d\t", asc[i]);
        }
        break;
    case 2:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (desc[j] < desc[j+1]) {
                    int temp = desc[j];
                    desc[j] = desc[j+1];
                    desc[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d\t", desc[i]);
        }
        break;
    default:
        printf("Invalid Option");
    }
}
