#include <stdio.h>
#define ROWS 3
#define COLS 3
void multiplyMatrices
(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]){
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = 0;
             for (int k = 0; k < COLS; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[ROWS][COLS]){
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix1[ROWS][COLS] =
            {{1,2,3},
             {4,5,6},
             {7,8,9}};
    int matrix2[ROWS][COLS] =
            {{1,2,3},
             {4,5,6},
             {7,8,9}};
    int result[ROWS][COLS];
    multiplyMatrices(matrix1,matrix2,result);
    displayMatrix(matrix1);
    displayMatrix(matrix2);
    displayMatrix(result);

    return 0;
}
