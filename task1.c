#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, sum = 0;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) sum += arr[i];
    printf("Sum of the array: %d\n", sum);
    free(arr);
    return 0;
}
