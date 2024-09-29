#include <stdio.h>
void sum_of_two_numbers(int, int); // Prototype
int product_of_two_numbers(int, int);
int main() {
    sum_of_two_numbers(2,3); // Function Call
    // 2,3 -> Real values (Arguments)
    int p = product_of_two_numbers(10,20);
    printf("\n%d",p);
    return 0;
}
void sum_of_two_numbers(int a, int b){ // Signature
    // Function Body // Function Definition
    // a, b Parameters
    printf("The sum is %d", a+b);
}
int product_of_two_numbers(int a, int b){
   int p = a * b;
   return p;
}
