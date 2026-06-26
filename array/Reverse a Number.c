#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem;
    printf(" please enter a number\n");
    scanf("%d",&num);
    int arry[10];
    int count=0;
    int original_num =num;
    while(num != 0) {
            num = num / 10;
            count++;
        }
    num= original_num;
    for(int i=0;i<count;i++){
            rem=num%10;
           num=num/10;
          arry[i]=rem;
    }
    for(int i=0;i<count;i++){
        printf("%d",arry[i]);
    }
    return 0;
}
