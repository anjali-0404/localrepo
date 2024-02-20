#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculate\n \n");

    float a,b;
    printf("Enter a&b\n");
    scanf("%f",&a);
    scanf("%f",&b);

    printf("addition of 2 no is %f",a+b);

    printf("Subtraction of 2 no is %f",a-b);
    float e=a*b;
    printf("Multiplication of 2 no is %f",a*b);
    float f=a/b;
    printf("Division of 2 no is %f",a/b);

    return 0;
}
