#include <stdio.h>
#include <stdlib.h>

int main(){

    // intialized array of pointers to strings
    char *names[5];

    for (int i = 0; i < 5; i++)
    {
        names[i] = (char *)malloc(100 * sizeof(char));
        printf("\nEnter %d student name", i + 1);
        scanf("%s", names[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
        free(names[i]); // Free the allocated memory
    }
    
    return 0;
}