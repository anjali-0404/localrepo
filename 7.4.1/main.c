#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,k,rows=5;
 for(i=1;i<=rows;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf(" ");
     }
     for(k=i;k<=rows;k++)
     {
         printf("%d",k);
     }
     printf("\n");
 }

    return 0;
}
