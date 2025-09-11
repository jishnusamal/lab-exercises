#include <stdio.h>

int main(){
    int n, k, pos=0;
    n=5;
    int a[20] = {23, 47, 56, 65, 16};
    /*printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }*/


    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++, pos++) {
        if ( a[i] == k) {
            printf("Element found at %d\n", pos+1);
        }
    }

    for (int i = pos; i < n-1; i++) {
            a[i] = a[i+1];
    }
    n-=1;

    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

}
