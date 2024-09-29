#include <stdio.h>
#define gsss main
int gsss() {
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel",ch);
            break;
        default:
            printf("Consonant.\n");
    }

    return 0;
}


