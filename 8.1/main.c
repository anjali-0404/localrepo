#include <stdio.h>
#include <stdlib.h>

void main()
{
    int array[5],i;
    printf("Enter elements into the array:");
    for(i=0;i<5;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("Array elements displayed in reverse order are:");
    for(i=4;i>=0;i--){
         printf("array[%d]:",i);
        printf("%d",array[i]);
    }
}
