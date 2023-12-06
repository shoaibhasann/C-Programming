#include <stdio.h>

void strLen(char *str){

    char *ptr = str;

    int length = 0;

    for (int i = 0; *ptr != '\0'; ptr++)
    {
        length++;
    }

    printf("%d is length of string", length);
}

int main(){
    char name[] = "Shoaib";    

    strLen(name);
    
//    name -> &name[0];
}