#include <stdio.h>


int main(){

    // initialising file pointer
    // FILE *fptr;

    // // Open a file with intention -> READ
    // fptr = fopen("Text.txt", "r");

    // if(fptr == NULL){
    //     printf("File doesn't exists");
    // }

    // char ch;
    // ch = fgetc(fptr);

    // // printing all words from Text.txt file
    // while (ch != EOF)
    // {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }

    // char data[200];

    // Reading data from file
    // fscanf(fptr, "%s", data);
    // printf("%s", data);

    // Writing into file
    // fprintf(fptr, "%s", name);

    // program to read 5 integers from file
    // FILE *fptr;

    // fptr = fopen("Text.txt", "r");

    // int n;

    // for (int i = 0; i < 5; i++)
    // {
    //     fscanf(fptr,"%d", &n);
    //     printf("%d\t", n);
    // }

    // Program to write odd numbers in Odd.txt file
    // Creating file pointer
    // FILE *fptr;

    // // Opening file in write mode
    // fptr = fopen("Odd.txt", "w");

    // int n;

    // int number = 1;

    // printf("Enter value of n: \n");
    // scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     fprintf(fptr, "%d\n", number);

    //     number = number + 2;
    // }

    // // closing file
    // fclose(fptr);

    // create file pointer
    FILE *fptr1;
    FILE *fptr2;

    int n;

    printf("How many numbers you want to enter?\n");
    scanf("%d", &n);

    fptr1 = fopen("Odd.txt", "a");
    fptr2 = fopen("Even.txt", "a");

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : \n", i+1);
        scanf("%d", &numbers[i]);
    }

    // checking number is even or odd

    for (int i = 0; i < n; i++)
    {
        if(numbers[i] % 2 == 0){
            fprintf(fptr2, "%d\n", numbers[i]);
        } else{
            fprintf(fptr1, "%d\n", numbers[i]);
        }
    }

    fclose(fptr1);
    fclose(fptr2);
    
    return 0;
}