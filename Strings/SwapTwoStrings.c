#include <stdio.h>
#include <string.h>
void swapStrings(char str1[], char str2[]){
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int main() {
    char str1[100], str2[100];
    printf("Enter the string 1:\n");
    gets(str1);
    printf("Enter the string 2:\n");
    gets(str2);
    printf("Before swap: S1 = %s, S2 = %s\n", str1,str2);
    swapStrings(str1,str2);
    printf("After swap: S1 = %s, S2 = %s\n", str1,str2);
    return 0;
}
