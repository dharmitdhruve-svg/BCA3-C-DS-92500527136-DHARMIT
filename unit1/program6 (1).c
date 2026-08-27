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

    printf("\n Enter Position at which you want to insert value :");
    scanf("%d",&pos);
    pos=pos-1;
    printf("\n Enter New value to be inserted : ");
    scanf("%d",&val);

    // logic part
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }

}
