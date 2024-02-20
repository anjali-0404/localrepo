#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a=\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive no.",a);
    }
    else if(a<0)
    {
        printf("%d is negative no.",a);
    }
     else if(a=0)
    {
        printf("%d is zero",a);
    }
    return 0;
}
