#include <stdio.h>
#include <stdlib.h>

int main()
{
    do{
        int num;
        printf("please enter the number\n");
        scanf("%d",&num);
        int result=0;
        int reminder;
        int count=0;
        int sum=0;
        int original_number=num;

        while(num!=0){
            num=num/10;
            count++;
        }
        int oridinalCount=count;
        num=original_number;

        while(num!=0){
            int pow=1;
            while(count!=0){
               reminder=num%10;
               pow=pow*reminder;
               count--;
            }
            sum+=pow;
            count= oridinalCount;
            num=num/10;
        }
        if(sum==original_number){
            printf(" the number is Armstrong\n ");
            }
        else{
            printf(" the number isn't Armstrong\n ");
           }
    }while(1);

    return 0;
}
