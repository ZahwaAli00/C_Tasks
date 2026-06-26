#include <stdio.h>
#include <stdlib.h>
#define n 5
int main()
{
    int arr[n];
    for(int i=0;i<n;i++){
        printf("please enter array %d 'st element of array ",i+1);
        scanf("%d",&arr[i]);
    }
   int max=0;
    int min=0;
    for(int i=0;i<n;i++){
      if(arr[i]>max){
        max=arr[i];
      }
      if(arr[i]<min){
        min=arr[i];
      }
    }
    printf(" the max =%d\n the min= %d ", max ,min);
    return 0;
}
