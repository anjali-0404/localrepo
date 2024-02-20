#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=0,b=1,nextterm=a+b,n;
  printf("\n enter value of n=");
  scanf("%d",&n);
  printf("\n fibonacci series=%d,%d,",a,b);
  for(int i=3;i<=n;i++)
  {
      printf("%d",nextterm);
      a=b;
      b=nextterm;
      nextterm=a+b;
  }
    return 0;
    }
