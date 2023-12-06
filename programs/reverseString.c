#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2){
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void reverseString(char *str, int n){
    int i = 0;
    char *firstChar = &str[i];
    char *lastChar = &str[n - i -1];

    while (i < n/2)
    {
        swap(firstChar, lastChar);
        i++;
        firstChar = &str[i];
        lastChar = &str[n - i -1];
    }    
        
}

int main(){
    char name[] = "madam";
    int length = strlen(name);

    char copy[100];

    strcpy(copy, name);

    reverseString(name, length);

    printf("%s\n", name);

    // check string is palindrome or not
    if((strcmp(copy, name)) == 0){
        printf("String is palindrome\n");
    } else{
        printf("String is not palindrome\n");
    }

    
    return 0;
}