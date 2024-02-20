#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a=\n");
    scanf("%d",&a);

    if(a%2==0)
        printf("%d is even no.",a);
        else
        printf("%d is odd no.",a);
    return 0;
}
