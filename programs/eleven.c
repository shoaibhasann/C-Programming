#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("my.txt", "r");

    if(fptr == NULL){
        printf("file doesn't exists");
        return 1;
    }

    char str[200];
    char ch;
    int i = 0;

    while ((ch = fgetc(fptr)) != EOF && i < sizeof(str) - 1)
    {
        str[i] = ch;
        i++;
    }

    str[i] = '\0';

    printf("%s\n", str);

    fclose(fptr);
    return 0;
}