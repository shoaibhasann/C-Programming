#include <stdio.h>
#include <string.h>

int vowelCounter(char str[]){
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }

    printf("vowels count is : %d", count);
    
}

// function to slice string
void slice(char str[100], int start, int end){
    char slicedStr[100];

    int j = 0;

    for (int i = start; i <= end; i++)
    {
        slicedStr[j] = str[i];
        j++;
    }

    // add null terminator in sliced string
    slicedStr[j] = '\0';

    puts(slicedStr);
    
}

// function to concatenate two strings
void concatStr(char str1[], char str2[], char result[]){
    int i, j;

    // copy first string into result string
    for ( i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }

    // copy second string into result string
    for ( j = 0; str2[j] != '\0'; j++)
    {
        result[i + j] = str2[j];
    }

    // add null terminator in the end of result string
    result[i + j] = '\0';
    
}


// printing string using pointers
void printString(char *arr){
    for (int i = 0; *(arr + i) != '\0'; i++)
    {
        printf("%c", *(arr + i));
    }
}

void swap(char *val1, char *val2)
{
    char temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int strLen(char arr[]){
    int length = 0;

    for ( int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }

    return length;
    
}

void reverseString(char *arr, int n){
    int i = 0;

    char *firstChar = &arr[i];
    char *lastChar = &arr[n - i - 1];

    while (i < n/2 )
    {
        swap(firstChar, lastChar);
        i++;
        firstChar = &arr[i];
        lastChar = &arr[n - i - 1];
    }
    
}

int main()
{
    char name1[] = "Shoaib";
    char name2[] = "Hasan";

    vowelCounter(name1);

    return 0;
}