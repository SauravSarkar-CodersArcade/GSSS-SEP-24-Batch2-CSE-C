#include <stdio.h>
void findMaxMin(int * arr, int * max, int * min, int n){
    for (int i = 1; i < n; ++i) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}
int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    int max = arr[0], min = arr[0];
    findMaxMin(arr,&max, &min, n);
    printf("\nMax = %d & Min = %d\n", max, min);
    return 0;
}
