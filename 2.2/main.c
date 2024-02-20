#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,l,b,h,s,t,Carea,Tarea,Rarea,Sarea;

    printf("Enter r=\n");
    scanf("%f",&r);
    Carea=3.14*r*r;
    printf("area of circle is %f",Carea);
    printf("Enter h,b=\n");
    scanf("%f",&h);
    scanf("%f",&b);
    Tarea=0.5*b*h;
    printf("\narea of triangle is %f",Tarea);
    printf("Enter l,b=\n");
    scanf("%f",&t);
    scanf("%f",&l);
    Rarea=l*t;
    printf("\narea of rectangle is %f",Rarea);
    printf("Enter l=\n");
    scanf("%f",&s);
    Sarea=s*s;
    printf("\narea of Square is %f",Sarea);

    return 0;
}
