#include <stdio.h>
void bubbleSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {2,1,7,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
