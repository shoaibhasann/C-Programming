/*

 auto is default storage class variable that is declared inside function block
 and can only be acessed within function/block or they are declared. by default
 if you initialize a variable with auto keyword then it has some garbage values assingned 
 to them. Automatic variables are also called as local variables as they local to a function.

*/

#include <stdio.h>

int printValue(){
    auto int num = 20;
    printf("num is %d \n", num);
}

// Driver code
int main(){
    printValue();
    return 0;
}


/*
Register variables tells the compiler to store varaible in CPU register instead of memory. 
Frequently used variables declare with register keyword for faster acess.
*/

int usingRegisterVariable() {
    register char star = '*';
}

int usingStaticKeyword(){
    static int myAge = 23;
};

// union keyword
union student
{
    int age;
    int marks;
} shoaib;

/* in above code of union all data members share same location named as shoaib and can be acessed
or manipualed by shoaib.age = '23';
 */

// type declarations
void typeDeclaration(){
    int a = 23;
    int b = a;
    int c = b * 3;
    int d = 3, e;

    e = 64;

    // type definition and declaration
    int x = 6, y = 8;

    // type declaration
    int p, q, r;

    // initialized variable
    p = q = r = 20;

    printf("e is %d", 64);
}


