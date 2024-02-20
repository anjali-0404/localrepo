#include <stdio.h>
 #include <conio.h>
 main() {
   int num=1,n,i;
   float sum=0.0,fact;
   printf("\n Enter the value of number: ");
   scanf ("%d", &n);
   while(num<=n){
    fact=1;
    for(int i=1.0;i<=n;i++) {
     fact=fact*i;
   }
   sum=sum+(1/fact);
   num++;
    }
    printf("\n The sum of series 1 + 1/2! +... + l/%d! = %f",n,sum);
    return 0;
 }
