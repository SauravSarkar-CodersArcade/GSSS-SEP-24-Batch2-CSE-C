#include <stdio.h>
int findMax(int arr[], int size){
    int mx = arr[0];
    for (int i = 1; i < size; ++i) {
        if(arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}
int findMin(int arr[], int size){
    int mn = arr[0];
    for (int i = 1; i < size; ++i) {
        if(arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}
int main() {
    // Find the maximum & minimum in an array using functions
    int arr[] = {4,1,-2,0,8,9,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Max = %d, Min = %d", findMax(arr,size), findMin(arr,size));
    return 0;
}
