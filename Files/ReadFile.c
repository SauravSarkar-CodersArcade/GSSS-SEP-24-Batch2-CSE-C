#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];
    fptr = fopen
            ("C:\\Users\\Saurav\\CLionProjects\\GSSS-SEP-CSE-B2\\Files\\gsss.txt", "r");
    if(fptr == NULL){
        return -1;
    } else{
        printf("Successfully Loaded the file.\n");
    }
    // fscanf(), fgets()
    while (fgets(buffer, sizeof(buffer), fptr) != NULL){
        printf("%s", buffer);
    }
    fclose(fptr);
    return 0;
}
