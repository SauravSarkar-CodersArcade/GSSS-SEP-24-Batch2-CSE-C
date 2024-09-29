#include <stdio.h>

int main() {
    char c;
    int isLowerCaseVowel, isUpperCaseVowel;
    printf("Enter any character from A-Z or a-z:\n");
    scanf("%c", &c);
    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(isLowerCaseVowel || isUpperCaseVowel){
        printf("%c is a vowel.\n", c);
    } else{
        printf("%c is a consonant.\n", c);
    }
    return 0;
}
