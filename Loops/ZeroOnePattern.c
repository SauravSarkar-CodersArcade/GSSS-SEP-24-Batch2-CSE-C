#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    for (int row = 1; row <= n ; ++row) {
        for (int col = 1; col <= row ; ++col) {
            if((row + col) % 2 == 0){
                printf(" 1 ");
            } else{
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
