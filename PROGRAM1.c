#include<stdio.h>

void main()
{
    int a[10],i,n,search,flag;

    printf("\n Enter Limit :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
     printf("\n Enter Value %d :" ,i+1);
     scanf("%d",&a[i]);
    }
    printf("\n Enter Value to be search :");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
         if(a[i]==search)
         flag==1;
             printf("\n Value %d is found on position : %d",search,i+1);
             break;

    }

         if (flag==0)
         {
             printf("\n Value not found..");
         }
    }


