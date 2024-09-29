#include <stdio.h>
int main() {
    int a = 10;
    printf("%p\n", &a); // Complete Address using 'address operator &'
    printf("%x\n", &a); // Base Address 'address operator &'
    int * ptr = &a;
    printf("%p\n", ptr);// Complete Address using pointer
    printf("%x\n", ptr);// Base Address using pointer
    printf("Value of a using variable: %d\n", a);
    printf("Value of a using pointer: %d\n", *ptr); // De-referencing
    printf("Size of pointer: %zu Bytes.\n", sizeof(ptr));
    printf("Size of pointer: %llu Bytes.\n", sizeof(ptr));
    printf("Address of pointer ptr using & operator: %p\n", &ptr);
    int **pp = &ptr;
    printf("Address of pointer ptr using double pointer: %p\n", pp);
    printf("Value of a using double pointer: %d\n", **pp);
    printf("%d", *(&a));
    return 0;
}
