#include <stdio.h>

// Function for swaping values
// call by reference
void swap(int *val1, int *val2){
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void pointerToPointer(){
    char star = '*';

    // pointer which store the address of star variable
    char *ptr = &star;

    // pointer which another pointer memory address
    char **pptr = &ptr;

    // print value from pointer to pointer
    printf("value of pointer to pointer %c\n", *(*pptr));
    printf("value of pointer %p\n", *pptr);
    printf("value of pointer to pointer %p\n", ptr);
    printf("value of pointer to pointer %p\n", &star);
}

int main(){

    int x = 72;
    int y = 100;

    swap(&x, &y);
    printf("x = %d and y = %d", x, y);

    // pointerToPointer();

    // int x = 2000;

    // int *pointer;

    // pointer = &x;

    // // changing value of x indirectly using pointer
    // *pointer = 0;

    // printf("value of x is : %d\n", x);
    // printf("%d\n", *pointer);

    // int age = 23;
    
    // // intiliaze pointer variable
    // int *ptr = &age;

    // // printing memory address of age variable
    // printf("%p\n", &age);

    // // printing stored memory address inside pointer
    // printf("%p\n", ptr);

    // // printing pointer's memory address
    // printf("%p\n", &ptr);

    // // printing value at stored memory address inside pointer
    // printf("%d\n", *ptr);
    // printf("%d\n", age);
    // printf("%d\n", *(&age));

    return 0;
}
