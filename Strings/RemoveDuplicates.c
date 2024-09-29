#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[]){
    int index = 0;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        int j;
        for (j = 0; j < i; ++j) {
            if (str[i] == str[j]){
                break; // Already appeared
            }
        }
        // If it is unique then we need to store the character
        if (j == i){
            str[index++] = str[i]; // Add the character to the final result
        }
    }
    str[index] = '\0'; // Null-character the string index
}
int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    removeDuplicates(str);
    printf("The final string without duplicates is: %s\n", str);
    return 0;
}
