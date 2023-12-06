#include <stdio.h>
#include <stdbool.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; // Reset the flag at the beginning of each pass

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

int factorial(int n){
    if(n <= 1){
        return n;
    }
    int fact = factorial(n - 1) * n;

    return fact;
}

int main()
{
    int num = 5;

    printf("factorial of %d is %d\n", num, factorial(5));
    return 0;
}
