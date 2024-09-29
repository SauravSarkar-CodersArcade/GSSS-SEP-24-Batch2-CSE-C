#include <stdio.h>
int hammingWeight(int n){
    int count = 0;
    while (n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main() {
    printf("%d\n", hammingWeight(11));
    printf("%d\n", hammingWeight(15));
    printf("%d\n", hammingWeight(0));
    return 0;
}
