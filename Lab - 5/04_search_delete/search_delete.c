#include <stdio.h>

int main(){
    int n, k, a[20], pos = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++, pos++) {
        if ( a[i] == k) {
            printf("Element found at %d\n", pos+1);
            break;
        }
    }

    for (int j = pos; j < n-1; j++) {
        a[j] = a[j+1];
    }
    n-=1;

    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

}
