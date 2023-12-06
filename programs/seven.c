#include <stdio.h>

int main()
{
    FILE *evenFile;
    FILE *oddFile;

    int num;

    printf("How many numbers you want to enter?\n");
    scanf("%d", &num);

    int numbers[num];

    // input numbers
    for (int i = 0; i < num; i++)
    {
        printf("Enter number %d : \n", i + 1);
        scanf("%d", &numbers[i]);
    }

    // open files before the loop
    evenFile = fopen("Even.txt", "w");
    oddFile = fopen("Odd.txt", "w");

    // writing numbers in file
    for (int i = 0; i < num; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            fprintf(evenFile, "%d ", numbers[i]);
        }
        else
        {
            fprintf(oddFile, "%d ", numbers[i]);
        }
    }

    // close files after the loop
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
