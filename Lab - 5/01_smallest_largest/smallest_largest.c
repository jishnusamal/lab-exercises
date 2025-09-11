#include <stdio.h>

int main(){
    int n, nums[20];

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j<n-i-1; j++) {
            if (nums[j]>nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    printf("Smallest number = %d\n", nums[0]);
    printf("Largest number = %d", nums[n-1]);
}
