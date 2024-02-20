#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long fact=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
        printf("Error! Factorial of a negative number doesn't exist");
    else{
        for(i=1;i<=n;++i){
            fact*=i;
        }
        printf("factorial of %d = %11u",n,fact);
    }
    return 0;
}
