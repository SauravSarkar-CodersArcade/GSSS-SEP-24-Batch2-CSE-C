#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen
            ("C:\\Users\\Saurav\\CLionProjects\\GSSS-SEP-CSE-B2\\Files\\demo.txt", "a");
    if(fptr == NULL){
        return -1;
    } else{
        printf("Successfully Loaded the file.\n");
    }
    fprintf(fptr, "We are in GSSSIETW.\n");
    fclose(fptr);
    return 0;
}
