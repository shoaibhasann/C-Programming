#include <stdio.h>

int main(){
    
    int i;
    int f = 1;
    int n;

    printf("Enter number: ");

    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        f = f * i;
    }

    printf("factorial is : %d", f);

    return f;

}