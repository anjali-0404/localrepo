#include <stdio.h>
int main()
{
int ch,key;
int a[100];
int i,item,pos,n=5;
printf("Enter 5 elements\n");
for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
printf("array before insertion:");
for(i=0;i<n;i++)
scanf("%d",a[i]);
while(1)
{
    printf("\n\n");
    printf("\n 1. for insert element in array");
    printf("\n 2. for deleting element from array");
    printf("\n 3. for exit");
    printf("\n\n Enter your choice");
    printf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("enter the element to be inserted:");
            scanf("%d",&item);
             printf("enter the position at which element to be inserted:");
            scanf("%d",&pos);
            n++;
            for(i=n-1;i>=pos;i--)
                a[i]=a[i-1];
            a[pos-1]=item;
            printf("array after insertion:");
            for(i=0;i<n;i++)
                printf("%d",a[i]);
    case 2:
        printf("Enter the element to be deleted:");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
                pos=i;
        break;

        }
        printf("array");
}
}
}