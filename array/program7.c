#include <stdio.h>
#include <stdlib.h>

#define n 6

int main()
{
    int array[n];
    int a;

    for(int i=0; i<n; i++){
        printf("please enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("enter the element that you want to remove: ");
    scanf("%d", &a);

    for(int i=0; i<n; i++){
        if(array[i] != a){
            printf("%d ", array[i]);
        }
    }

    return 0;
}
