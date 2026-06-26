#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30
int main()
{
    char str1[n];
    char str2[n];
    printf("please enter string 1: ");
    gets(str1);
    printf("please enter string 2: ");
    gets(str2);
    if(strcmp(str1,str2)>0){
        printf("string 1 is greater than string 2");
    }
    else if (strcmp(str1,str2)<0){
        printf("string 1 is less than string 2");
    }
    else if(strcmp(str1,str2)==0){
        printf("string 1 is  equal to string 2");
    }
    return 0;
}
