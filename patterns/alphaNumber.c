#include <stdio.h>

int main(){
    int n;

    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(i % 2 != 0){
                printf("%d\t", j + 1);
            } else {
                printf("%c\t", (int)'A' + j);
            }
        }
        printf("\n");
    }
    
    return 0;
}