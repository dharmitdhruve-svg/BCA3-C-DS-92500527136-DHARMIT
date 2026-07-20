#include<stdio.h>

void main()
{
    int a[3],b[3],c[3],i,j=0;
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
    printf("\n Enter Value for c\n");
    for(i=0;i<3;i++)
    {
         c[j]=a[i];
         j++;
    }
    for(i=0;i<3;i++)
    {
         c[j]=b[i];
         j++;
    }
    printf("\n Merged elements are as follows\n");
    for(i=0;i<6;i++)
    {
        printf("\n %d",c[i]);
    }



}

