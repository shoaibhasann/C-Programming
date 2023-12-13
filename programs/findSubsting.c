#include <stdio.h>
#include <string.h>


int subStr(char mainString[], char subString[]){
    int mainLen = strlen(mainString);
    int subLen = strlen(subString);

    for (int i = 0; i <= mainLen - subLen; i++)
    {
        int j;

        for ( j = 0; j < subLen; j++)
        {
            if(mainString[i + j] != subString[j]){
                break;
            }
        }

        if(j == subLen){
            return 1;
        }
        
    }

    return -1;
    
}

int main(){

    char name[50] = "Palestine";

    char subString[50] = "Pal";

    int result = subStr(name, subString);

    if(result == 1){
        printf("substring is present in main string");
    } else{
        printf("substring is not present in main string");
    }

    return 0;
}
