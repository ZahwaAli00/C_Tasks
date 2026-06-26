#include <stdio.h>
#include <stdlib.h>

int main()
{
    do{
        int n;
        int result;
        printf("please enter n of fibonacci(n) :number of terms\n ");
        scanf("%d",&n);
        int arr[50];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }
    }while(1);
    return 0;
}
