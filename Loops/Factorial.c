#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    unsigned long long factorial = 1;
    if(num < 0){
        printf("The factorial of negative nos. is invalid.\n");
    }else{
        for (int i = 1; i <=num ; ++i) {
            factorial *= i;
        }
        printf("The factorial of %d is %llu", num, factorial);
    }
    return 0;
}
