#include <stdio.h>

#define SIZE 3

void  matrixMultiplication(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < SIZE; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            
        }
        
    }
    
}

void matrixAddition(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }
    
}

int main(){
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {13, 2, 30},
        {4, 54, 6},
        {72, 8, 9}
    };

    int C[3][3] = {
        {3, 12, 3},
        {14, 15, 6},
        {20, 8, 9}};

    int multiplyResult[3][3];

    // this give result of B x C
    matrixMultiplication(B, C, multiplyResult);

    int finalResult[3][3];

    // final result = A + ( B x C );
    matrixAddition(A, multiplyResult, finalResult);

    return 0;
}