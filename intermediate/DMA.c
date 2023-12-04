#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int *ptr;

    // // assingning 20 bytes of chunk data in ptr pointer
    // ptr = (int*) malloc(sizeof(int) * 5);

    // ptr[0] = 34;
    // ptr[1] = 36;
    // ptr[2] = 12;
    // ptr[3] = 94;
    // ptr[4] = 83;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // int *ptr;

    // calloc function allocate memory in contigous manner and assingn value to all memory blocks -> 0.
    // ptr = (int *)calloc(5, sizeof(int));

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // // free dynamic memory
    // free(ptr);

    // reallocate memory
    // ptr = (int *)calloc(3, sizeof(int));

    // ptr = realloc(ptr, 5);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("After reallocation");
    //     printf("%d\n", ptr[i]);
    // }

    int *ptr;

    // ptr = (int *)malloc(5 * sizeof(int));

    // // increase memory size
    // ptr = realloc(ptr, 8);

    // for (int i = 0; i < 8; i++)
    // {
    //     printf("After reallocation");
    //     printf("%d\n", ptr[i]);
    // }

    ptr = (int *)calloc(5, sizeof(int));

    int odd = 1;

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = odd;
        odd = odd + 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Odd Numbers");
        printf("%d\n", ptr[i]);
    }

    // increase memory size -> 6
    ptr = realloc(ptr, 6);

    int even = 2;

    for (int i = 0; i < 6; i++)
    {
        ptr[i] = even;
        even = even + 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Even Numbers");
        printf("%d\n", ptr[i]);
    }

    return 0;
}