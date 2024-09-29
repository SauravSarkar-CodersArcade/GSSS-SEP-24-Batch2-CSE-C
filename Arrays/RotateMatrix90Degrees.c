#include <stdio.h>
#define N 3
void transpose(int matrix[N][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
void reverseRows(int matrix[N][N]){
    for (int i = 0; i < N; ++i) {
        int start = 0;
        int end = N - 1;
        while (start < end){
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}
void rotateMatrix(int matrix[N][N]){
    transpose(matrix);
    reverseRows(matrix);
}
int main() {
    int matrix[N][N] =
            {{1,2,3},
             {4,5,6},
             {7,8,9}};
    rotateMatrix(matrix);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
