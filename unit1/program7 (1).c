#include<stdio.h>
void main()
{
    int a[20],i,pos,val,n;
    printf("\n Enter Limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Value %d : ",i+1);
        scanf("%d" ,&a[i]);
    }

    printf("\n Enter Position to be deleted :");
    scanf("%d",&pos);
    pos=pos-1;

    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n Values of arrays are as follows\n");

    for(i=0;i<n-1;i++)
    {
        printf("\n At Position %d Value is %d",i+1,a[i]);
    }
}
