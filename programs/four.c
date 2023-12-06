#include <stdio.h>
#include <string.h>

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void strRev(char *str)
{
    int stringLength = strlen(str);
    int i = 0;

    char *firstChar = &str[i];
    char *lastChar = &str[stringLength - i - 1];

    while (i < stringLength / 2)
    {
        swap(firstChar, lastChar);
        i++;
        firstChar = &str[i];
        lastChar = &str[stringLength - i - 1];
    }
}

int main()
{
    char str[100];

    printf("Enter string:\n");
    scanf(" %[^\n]", str);

    char reversed[100];

    strcpy(reversed, str);

    strRev(reversed);

    // check string is palidrome or not
    if(strcmp(str,reversed) == 0){
        printf("string is palindrome: %s\n", str);
    } else {
        printf("String is not palidrome");
    }

    return 0;
}
