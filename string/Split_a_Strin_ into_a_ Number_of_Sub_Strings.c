#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30
int main()
{
    char str1[n];
    char a;
    printf("please enter string you want to split: ");
    gets(str1);
    printf("please enter the character : ");
    scanf("%c",&a);
    int l= strlen(str1);
    int i=0;

        while(str1[i]!='\0'){
            if(str1[i]!=a){
                printf("%c",str1[i]);
            }
            else{
                printf("\n");
            }
            i++;
        }

    return 0;
}
