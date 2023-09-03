#include <stdio.h>

int main() {
    FILE* fptr = fopen("input.txt","r");
    char* fileContents;

    if (fptr == NULL) {
        printf("File Not Found");
        return 0;
    }

    // fileContents = (char*)malloc(sizeof (char)*fileContents * fptr);

    // while (fgets(fileContents,100,fptr)) {
    //     printf(*fileContents);
    // }

    fclose(fptr);
    free(fileContents);

    return 1;
}