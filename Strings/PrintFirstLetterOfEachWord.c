#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printFirstLetter(char str[]){
    int i = 0;
    // If the first character is a letter (alpha), print it else ignore
    if(isalpha(str[i])){
        printf("%c ", str[i]);
    }
    while (str[i] != '\0'){
        if(str[i] == ' ' && isalpha(str[i+1])){
            printf("%c ", str[i+1]);
        }
        i++;
    }
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    printf("\nThe first letters of each word are:\n");
    printFirstLetter(str);
    return 0;
}
