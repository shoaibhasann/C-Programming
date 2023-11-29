#include <stdio.h>

int main(){
    float a, b, result;
    char operator;

    printf("Enter two numbers: \n");

    scanf("%f %f", &a, &b);

    printf("Enter an operator (+, -, *, /): ");

    scanf(" %c", &operator);   // Added a space before %c to consume the newline character

    switch (operator){
        case '+': result = a + b;
        break;

        case '-': result = a - b;
        break;

        case '*': result = a * b;
        break;

        case '/': 
            if( b != 0){
                result = a / b;
            } else {
                printf("Error: Division by zero\n");
                break;
            }
        break;

        default: 
            printf("Invalid operator\n");
            return 1;
    }

    // Printing result
    printf("Result: %f\n", result);

    return 0;

}