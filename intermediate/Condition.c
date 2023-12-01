#include <stdio.h>

int main()
{
    for (int i = 2; i <= 300; i++)
    {
        int is_prime = 1; // Assume i is prime until proven otherwise

        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0; // i is not prime
                break;
            }
        }

        if (is_prime)
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}
