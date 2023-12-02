#include <stdio.h>

int main()
{
    // Declare and initialize two matrices of 3 x 3
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Declare a matrix to store the result
    int result[3][3];

    // adding two matrices
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // printing 2d array
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
