#include <stdio.h>

int main(){
    int n;

    printf("Enter any odd number : \n");
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j == mid || i == mid){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}