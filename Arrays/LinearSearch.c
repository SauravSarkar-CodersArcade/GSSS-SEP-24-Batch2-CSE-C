#include <stdio.h>
int linear_search(int arr[], int size, int key){
    for (int i = 0; i < size; ++i) {
        if(arr[i] == key)
            return i;
    }
    return -1; // Key was not found
}
int main() {
    int arr[] = {2,1,0,3,-1,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = linear_search(arr,size,300);
    if( index != -1){
        printf("Key is found at index %d\n", index);
    } else{
        printf("Key was not found.\n");
    }
    return 0;
}
