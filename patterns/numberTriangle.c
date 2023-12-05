#include <stdio.h>

int main(){
    int n;

    printf("Enter rows: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val = n;

        for (int j = 1; j <= i; j++)
        {
            printf("%d", val);
            val--;
        }
        printf("\n");
    }
    

    return 0;
}