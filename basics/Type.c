#include <stdio.h>

void checkingSize(){
    int a = 6;
    float b = 10.2;

    size_t result = sizeof(a + b);
    printf("Size of a + b: %zu bytes\n", result);

    printf("Size of int: %zu \n", sizeof(int));
    printf("Size of float: %zu \n", sizeof(float));
}

// Program to check number is divisible by 2 or not
int main(){

    int number;

    printf("Enter number");

    // & -> address of operator in scanf
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("Number is divisible by 2");
    } else {
        printf("Number is not divisible by 2");
    }

    return 0;
}
