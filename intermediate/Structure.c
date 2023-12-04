#include <stdio.h>
#include <string.h>

// sturcture is user defined data-type
typedef struct Student
{
    char name[30];
    int rollno;
    float cgpa;
} ste;

struct complexNumber{
    int real;
    int imaginary;
};

int main(){

    // struct Student s1;

    // string is defined in character array so they can't reinitialized or change
    // s1.name = "Shoaib Hasan";
    // strcpy(s1.name, "Shoaib Hasan");
    // s1.rollno = 21;
    // s1.cgpa = 10.0;
    
    // // printing structure values
    // printf("Name : %s\n", s1.name);
    // printf("Rollno : %d\n", s1.rollno);
    // printf("CGPA : %f\n", s1.cgpa);

    // Array of structures
    // struct Student IT[100];

    // strcpy(IT[0].name, "Shoaib");
    // IT[0].rollno = 23;
    // IT[0].cgpa = 9.8;

    // printf("Name is : %s\n", IT[0].name);
    // printf("Rollno is : %d\n", IT[0].rollno);
    // printf("Cgpa is : %f\n", IT[0].cgpa);

    // Initalising structure
    // struct Student s1 = {"Shoaib", 34, 8.9};

    // printing structure values
    // printf("Name : %s\n", s1.name);
    // printf("Rollno : %d\n", s1.rollno);
    // printf("CGPA : %f\n", s1.cgpa);

    // pointer to sturcture
    // struct Student *ptr;

    // assinging memory address of s3 variable which is structure made by student datatypes.
    // ptr = &s1;

    // printf("Name: %s\n", (*ptr).name);
    // Arrow operator 
    // printf("CGPA: %f\n", ptr->name);

    // create variable using structure with their alias (typedef -> keyword)
    ste s1;
    strcpy(s1.name, "Shoaib");
    s1.rollno = 40;
    s1.cgpa = 6.9;

    printf("Name is : %s\n", s1.name);

    struct complexNumber number = {5,8};
    struct complexNumber *ptr = &number;

    printf("real: %d and imaginary: %d", ptr->real, ptr->imaginary);

    return 0;
}