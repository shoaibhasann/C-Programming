#include <stdio.h>

// declare a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main(){

    // Deaclare a varaible of data typed union data
    union Data myData;

    myData.intValue = 34;

    printf("int value : %d\n", myData.intValue);

    myData.floatValue = 5.93;

    printf("float value: %f\n", myData.floatValue);

    printf("int value after modification : %d\n", myData.intValue);

    return 0;
}