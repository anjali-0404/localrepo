#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number,j,sum=0,fact,i;
    printf("%f",&number);
    scanf("%f",&number);
    for(i=1;i<=number;i++)
    {
        fact = 1;
         for(j=1;j>0;j--)
         {
            fact=fact*j;
             sum=sum+(1/fact);
         }
        
    }
        printf("\n The sum of given series is");
        return 0;
}
