#include <stdio.h>

#define SIZE 4

void multiplyMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;
            // compute the value of result[i][j] element
            for (int k = 0; k < 4; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            
        }
        
    }
    
}

int main()
{
    // Matrix 1
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // Matrix 2
    int matrix2[SIZE][SIZE] = {
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 26, 27, 28},
        {29, 30, 31, 32}};

    int result[SIZE][SIZE];

    multiplyMatrices(matrix1, matrix2, result);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", result[i][j]);
        }

        printf("\n");
        
    }
    
    return 0;
}