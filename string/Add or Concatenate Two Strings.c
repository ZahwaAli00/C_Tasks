#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 15
int main()
{
    char str1[n];
    char str2[n];
    printf("please enter string 1: ");
    gets(str1);
    printf("please enter string 2: ");
    gets(str2);
    strcat(str1,str2);
    printf("%s", str1);
    return 0;
}

