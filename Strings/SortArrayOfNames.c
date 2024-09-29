#include <stdio.h>
#include <string.h>
void sortStrings(char arr[][100], int n){
    char temp[100];
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(strcmp(arr[i], arr[j]) > 0){
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number of strings:\n");
    scanf("%d", &n);
    getchar(); // Skip the new line character
    char arr[n][100];
    printf("\nEnter the strings:\n");
    for (int i = 0; i < n; ++i) {
        gets(arr[i]);
    }
    sortStrings(arr, n);
    printf("\nThe sorted strings are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
