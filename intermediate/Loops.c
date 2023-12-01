#include <stdio.h>

void printCountAndSquare(){
    int square;

    for (int i = 1; i <= 12; i++)
    {
        square = i * i;
        
        printf("%d %d\n", i, square);
    }
    
}

void sumOfDigits(){
    int number, sum = 0, digit;

    printf("Enter a 4 digit number");
    scanf(" %d", &number);

    for (int i = 0; i < 4; i++)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits is : %d\n", sum);
    
}

// sort numbers in ascending number
void sortNumbers(){
    int num1, num2, num3, lowest;

    printf("Enter three numbers");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 <= num2 && num2 <= num3){
        lowest = num1;
    }

    if(num2 <= num3 && num2 <= num1){
        lowest = num2;
    }

    if(num3 <= num1 && num3 <= num2){
        lowest = num3;
    }

    if( lowest == num1 ){
        if(num2 <= num3){
            printf("%d \n%d \n%d", num1, num2, num3);
        } else {
            printf("%d \n%d \n%d", num1, num3, num2);
        }
    }

    if( lowest == num2 ){
        if(num3 <= num1){
            printf("%d \n%d \n%d", num2, num3, num1);
        } else {
            printf("%d \n%d \n%d", num2, num1, num3);
        }
    }

    if(lowest == num3){
        if(num1 <= num2){
            printf("%d \n%d \n%d", num3, num1, num2);
        } else {
            printf("%d \n%d \n%d", num3, num2, num1);
        }
    }
}



int main()
{
    int i , j, n;

    printf("Enter the number");
    scanf(" %d", &n);

    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}