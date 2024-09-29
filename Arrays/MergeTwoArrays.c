#include <stdio.h>
void mergeTwoArrays(int a1[], int n1, int a2[], int n2, int a3[]){
    for (int i = 0; i < n1; ++i) {
        a3[i] = a1[i];
    }
    for (int i = 0; i < n2; ++i) {
        a3[n1+i] = a2[i];
    }
}
int main() {
    int a1[3] = {1,2,3};
    int a2[4] = {4,5,6,7};
    int a3[7];
    mergeTwoArrays(a1,3,a2,4,a3);
    for (int i = 0; i < 7; ++i) {
        printf("%d ", a3[i]);
    }
    return 0;
}
