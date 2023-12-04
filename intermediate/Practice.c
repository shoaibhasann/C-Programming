#include <stdio.h>

struct student
{
    char name[50];
    int rollNumber;
    char address[100];
    char course[5];
};

// structure passed in function as call by value way
void structurePassing(struct student s1);


int main(){
    struct student students[10];

    // input students details
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Course (BCA/MCA): ");
        scanf("%s", students[i].course);
        printf("\n");
    }
    // Display details of all students
    printf("Details of all students:\n");

    // printing details
    for (int i = 0; i < 10; i++)
    {
        printf("Name: %s", students[i].name);
        printf("Name: %d", students[i].rollNumber);
        printf("Name: %s", students[i].address);
        printf("Name: %s", students[i].course);
    }
    
    return 0;
}