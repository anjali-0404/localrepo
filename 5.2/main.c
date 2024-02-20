#include <stdio.h>
#include <conio.h>

int main()
{
    int n1,n2;
    float result;
    char ch;
    printf("Choose operations to perform(+,-.*,/,%):");
    scanf("%c",&ch);
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    printf("Choose operations to perform(+,-.*,/,%):");
    scanf("%c",&ch);
    result=0;
    switch(ch)
    {
    case'+':
        result=n1+n2;
        break;
    case'-':
        result=n1-n2;
        break;
    case'*':
        result=n1*n2;
        break;
    case'/':
        result=n1/n2;
        break;
    case'%':
        result=n1%n2;
        break;
    default:
        printf("Invalid operation.\n");

    }
    printf("Result: %d %c %d=%f\n",n1,ch,n2,result);
    return 0;
}
