#include <stdio.h>

int main(){
    int val = 1;

    for (int i = 1; i <= 3; i++)
    {
        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= 5 - i; j++)
        {
            printf("%d", val);
            val++;
        }
        printf("\n");
    }
    
    return 0;
}