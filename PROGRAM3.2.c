#include<stdio.h>

void main()
{
    int a[3],b[3],c[3],i;
    printf("Enter value for a\n");
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
    printf("\n Result c=(a+b)");
    for(i=0;i<3;i++)
    {
        printf("\n Total Value is : %d",c[i]);
    }
    printf("\n");


}
