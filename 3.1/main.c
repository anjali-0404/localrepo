#include <stdio.h>

int main()
{
    float km,m,cm,inches,feet;

    printf("Enter distance in km\n");
    scanf("%f",&km);

    m=km*1000.0;
    cm=km*100000.0;
    inches=km*39370.1;
    feet=km*3280.84;

    printf("Distance in meter is %f\n",m);
    printf("Distance in centimeter is %f\n",cm);
    printf("Distance in inches is %f\n",inches);
    printf("Distance in feet is %f\n",feet);

    return 0;
}
