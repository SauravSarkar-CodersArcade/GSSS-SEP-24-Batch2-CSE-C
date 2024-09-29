#include <stdio.h>
// The name of the array (arr) points to the address of the first element
void reverseArray(int * arr, int n){
    int * start = arr;
    int * end = arr + n - 1;
    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[] = {3,4,1,2,6,7};
    reverseArray(arr,6);
    for (int i = 0; i < 6; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
