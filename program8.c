#include<stdio.h>
void main()
{
    int a[5],i,j,n,temp;
    printf("\n Enter Limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Value %d : ",i+1);
        scanf("%d" ,&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
        }
    }
    printf("\n Sorted elements\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}


