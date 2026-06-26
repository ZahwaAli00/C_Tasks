#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30
int main()
{
    char str1[n];
    char str2[n];
    int index;
    printf("please enter string 1: ");
    gets(str1);
    printf("please enter string 2: ");
    gets(str2);
    printf("enter the index where you want to insert the second string:'note start from 0' ");
    scanf("%d",& index);
    int len1=strlen(str1);
    int len2=strlen(str2);

    for(int i=index;i<=(len1+len2);i++){ //بعمل ازاحه للكلمه اللي هدخلها
       str1[i+len2]=str1[i];
    }
    for(int i=0;i<len2;i++){ //بدخل الكلمه
        str1[i+index]=str2[i];
    }
    printf("%s",str1);
    return 0;
}
