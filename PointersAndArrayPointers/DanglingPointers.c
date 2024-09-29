#include <stdio.h>
int * function(){
    static int x = 10; // Address -> 1000 // x is global
    return &x;
    int y = 10;
}
int main() {
    int * ptr = function(); // 1000
    printf("The value of x is : %d", *ptr);
    y
    return 0;
}
