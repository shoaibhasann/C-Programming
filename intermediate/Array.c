#include <stdio.h>
#include <stdbool.h>

/*
Array is collection of similar data types stored in contigous memory location.
In c array is statically typed means we can store same data type in an array. bt
*/

void swap(int *val1, int *val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;

    bool swapped;

    for ( i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }

        // checking if swapping happend
        if(swapped == false){
            break;
        }
    }
    
}


void printArray(int *arr, int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
    
}

// void printTwoArray(int arr[], int m,  int n){
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; i < n; i++)
//         {
//             printf("%d \t", arr[i][j]);
//         }
//         printf("\n");
        
//     }
    
// }

// Array is a pointer
void pointerArray(){
    int lessons[8];

    // BOTH ARE SAME
    // int *ptr = &lessons[0];
    // int *ptr = lessons;


}

void reverseArr(int *arr, int n)
{
    int i = 0;
    int *first = &arr[i];
    int *last = &arr[n - i - 1];

    while (i < n / 2)
    {
        swap(first, last);
        i++;
        // updating pointer's positions
        first = &arr[i];
        last = &arr[n - i - 1];
    }
}

int main(){

    int marks[4] = { 43, 34, 20, 59 };

    int n = sizeof(marks) / sizeof(marks[0]);

    // sorting array
    bubbleSort(marks, n);

    printArray(marks, n);

    return 0;
}