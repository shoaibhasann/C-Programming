#include <stdio.h>

int main(){

    int rows, columns;

    printf("Enter no. of rows: \n");
    scanf("%d", &rows);

    printf("Enter no. of columns: \n");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if(i == 1 || i == rows){
                printf("*");
            } 
             else if (j == 1 || j == columns)
            {
                printf("*");
            } else {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}