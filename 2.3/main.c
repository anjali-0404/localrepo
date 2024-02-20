#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("calculate simple interest \n\n");

    float i,p,r,n;

    printf("Enter principal amount for interest:");
    scanf("%f",&p);

    printf("\nEnter rate of interest:");
    scanf("%f",&r);

    printf("\nEnter Number of years:");
    scanf("%f",&n);
    printf("\n\n Amount is:%f",p);
    printf("\n Rate is:%f",r);
    printf("\n Year is:%f",n);

    i=(p*r*n)/100;
    printf("\n\nYour Interest Amount is:%f\n",i);


    return 0;
}
