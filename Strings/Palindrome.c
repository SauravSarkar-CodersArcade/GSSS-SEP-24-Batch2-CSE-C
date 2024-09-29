#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]){
    int len = strlen(str);
    int s = 0;
    int e = len - 1;
    while (s < e){
        if(tolower(str[s]) != tolower(str[e])){
            return 0; // It's not a palindrome
        }
        s++;
        e--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    if(isPalindrome(str)){
        printf("%s is a Palindrome.\n", str);
    }else{
        printf("%s is not a Palindrome.\n", str);
    }
    return 0;
}
