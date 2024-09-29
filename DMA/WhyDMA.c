#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // use of malloc
    // ptr = (int *)malloc(n * sizeof(int)); // Array of size n
    // use of calloc
    ptr = (int *) calloc(n, sizeof(int ));
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }
    printf("The array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    realloc(ptr, n* sizeof(int));
    printf("Enter the new array elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }
    printf("The new array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    free(ptr); // De-allocation
    return 0;
}
