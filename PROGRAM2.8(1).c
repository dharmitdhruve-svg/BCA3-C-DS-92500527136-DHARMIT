// Find min and max number from a given array//

#include<stdio.h>
void main()
{
    int a[10],i,min,max;

    for(i=0;i<10;i++)
    {

        printf("\n Enter Value %d:",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<10;i++)
    {

    if (a[i]>max)
        {
          max=a[i];
        }
     if(a[i]<min)
     {
         min=a[i];
     }

    }
    printf("\n Max number is : %d",max);
    printf("\n Min number is : %d",min);
}

