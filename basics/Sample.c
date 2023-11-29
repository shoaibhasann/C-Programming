#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value for a, b: \n");

    scanf("%d %d", &a, &b);

    c = a * b;

    printf("The product is %d\n", c);
}