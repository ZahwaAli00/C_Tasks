#include <stdio.h>
#include <stdlib.h>

int main()
{
    do{
    unsigned int num;
    unsigned int arr[20];
    unsigned long int result =1;
    int limit;
    printf("please enter integer number\n");
    scanf("%d",&num);
    arr[0]=num;
    limit=num;

    for(int i=1;i<limit;i++){
        if(num!=0){
        num--;
        arr[i]= num;
        }
    }
    for(int i=0;i<limit;i++){
        if(arr[i]>0){
            result=result*arr[i];
        }
    }
    printf("the result =%ld\n",result);
    }while(1);
    return 0;
}
