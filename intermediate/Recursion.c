#include <stdio.h>

int sumOfNatural(int n);
int findFactorial(int number);

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int terms = 10; // You can change this to generate more or fewer terms

    printf("Fibonacci series for the first %d terms:\n", terms);
    for (int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// recursive function to find sum of natural number
int sumOfNatural(int n){

    if(n == 1){
        return 1;
    }

    int sumNm = sumOfNatural(n - 1);
    int sumN = sumNm + n;

    return sumN;
}

// recursive function to find factorial of number
int findFactorial(int number)
{
    if(number == 1 || number == 0){
        return 1;
    }

    // find factorial of n - 1 number
    int factorialOfNm = findFactorial(number - 1);

    int factorial = factorialOfNm * number;

    return factorial;
}