#include<stdio.h>
#include<conio.h>
void sum(int x, int y);
void sub(int x, int y);
void mult(int x, int y);
void div(int x, int y);
void main()
{
int a,b;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
sum(a,b);
sub(a,b);
mult(a,b);
div(a,b);
getch();
}
void sum(int x,int y)
{
printf("sum=%d\n",x+y);
}
void sub(int x,int y)
{
printf("difference=%d\n",x-y);
}
void mult(int x,int y)
{
printf("product=%d\n",x*y);
}
void div(int x,int y)
{
printf("quotient=%f\n",(float)x/y);
}
