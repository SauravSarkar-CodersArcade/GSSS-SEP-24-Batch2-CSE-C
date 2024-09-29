#include <stdio.h>
void swap_two_numbers(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10, b = 20;
    printf("Before swap: a=%d, b=%d\n", a,b);
    swap_two_numbers(&a,&b); // Call By Reference
    printf("After swap: a=%d, b=%d\n", a,b);
    return 0;
}
