#include<stdio.h>

void main()
{
    int a[3],b[3],c[3],i;

    printf("\n Enter value for A\n");

    for(i=0;i<3;i++)
    {
        printf("\n Enter Value %d : ",i++);
        scanf("%d",&a[i]);
    }
     printf("\n Enter value for b\n");

    for(i=0;i<3;i++)
    {
        printf("\n Enter Value %d : ",i++);
        scanf("%d",&b[i]);
    }
}
