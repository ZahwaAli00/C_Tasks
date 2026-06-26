#include <stdio.h>
#include <stdlib.h>
#define a 5
#define b 3
int main()
{
    int arr1[a];
    int arr2[b];
    int arr3[a+b];
    for(int i=0;i<a;i++){
        printf("please enter array %d 'st element of first array ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n");
     for(int i=0;i<b;i++){
        printf("please enter array %d 'st element of second array ",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<a;i++){
        arr3[i]=arr1[i];
    }
    for(int i=a;i<(a+b);i++){
        arr3[i]=arr2[i-a];
    }
     printf("the merge: ");
    for(int i=0;i<a+b;i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}
