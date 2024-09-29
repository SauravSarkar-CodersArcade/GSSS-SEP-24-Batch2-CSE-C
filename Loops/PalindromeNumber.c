#include <stdio.h>
int main() {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int original = n;
    int rev = 0;
    while (n > 0){ // Terminating Coding Questions
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(original == rev){
        printf("Palindrome.\n");
    } else{
        printf("Not Palindrome.\n");
    }

    return 0;
}
