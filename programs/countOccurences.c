#include <stdio.h>

void countOccurences(char str[]){
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    // dislay occurences
    for (int i = 0; i < 256; i++)
    {
        if(count[i] > 0){
            printf("%c -> %d\n", i, count[i]);
        }
    }
    
}

int main(){
    char string[] = "ARRANGE";

    countOccurences(string);
    
}