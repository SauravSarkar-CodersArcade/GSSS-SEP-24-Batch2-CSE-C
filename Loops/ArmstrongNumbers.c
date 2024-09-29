#include <stdio.h>
#include <math.h>
int main() {
//    int number = 1000;
//    int digits;
//    digits = (int) log10(number) + 1;  // 3.99
//    printf("%d", digits);
    int num, originalNum, remainder, n = 0, result;
    printf("Armstrong Numbers between 1 & 1000 are:\n");
    for (num = 1; num <= 1000 ; ++num) {
        result = 0;
        originalNum = num;
        n = (int) log10(num) + 1;
        while (originalNum != 0){
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum = originalNum / 10;
        }
        if(result == num){
            printf("%d\n", num);
        }
    }
    return 0;
}
