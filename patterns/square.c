#include <stdio.h>

int main(){
    int n;

    printf("Enter any number: \n");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c\t", (int)'A' + j);
        }
        printf("\n");
        
    }
    
    return 0;
}