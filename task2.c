#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *arr;
    double avg = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    printf("Array after calloc: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter %d integers: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        avg += arr[i];
    }
    avg /= n;
    printf("\nAverage of the array: %.2f\n", avg);
    free(arr);
    return 0;
}
