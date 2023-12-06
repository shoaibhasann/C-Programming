#include <stdio.h>

struct student
{
    char name[50];
    int rollNumber;
    char address[100];
    char course[10];
};

int main()
{
    // array of structure
    struct student students[3];

    // Input student details
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter RollNumber: ");
        if (scanf("%d", &students[i].rollNumber) != 1)
        {
            printf("Invalid input for RollNumber. Please enter a valid integer.\n");
            return 1; // Exit the program due to the error.
        }

        printf("Enter Address: ");
        scanf(" %[^\n]", students[i].address);

        printf("Enter Course: ");
        scanf(" %9s", students[i].course); // Limit to 9 characters to avoid buffer overflow.
    }

    // Display details of students
    for (int i = 0; i < 3; i++)
    {
        printf("\nDetails of student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("RollNumber: %d\n", students[i].rollNumber);
        printf("Address: %s\n", students[i].address);
        printf("Course: %s\n", students[i].course);
    }

    return 0;
}
