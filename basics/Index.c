#include <stdio.h>
#include <math.h>

// Program to check if a number is an Armstrong number
int isArmstrongNumber(int number)
{
    int originalNumber, remainder, n = 0, result = 0;

    originalNumber = number;

    // find how many digits are in the number
    while (originalNumber != 0)
    {
        originalNumber = originalNumber / 10;
        n++;
    }

    originalNumber = number; // Reset originalNumber to the initial value

    // calculate the sum of nth power of each digit
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        printf("remainder: %d\n", remainder);
        printf("result: %d\n", result);
        originalNumber /= 10;

        printf("original number: %d\n", originalNumber);
    }

    // check if the result is equal to the original number
    return result == number;
}

int main()
{
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrongNumber(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
