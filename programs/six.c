#include <stdio.h>

int main(){
    FILE *srcFile, *destFile;

    srcFile = fopen("source.txt", "r");

    if(srcFile == NULL){
        printf("File doesn't exists");
        return 1;
    }

    destFile = fopen("destination.txt", "w");

    int ch;

    while ((ch = fgetc(srcFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;

}