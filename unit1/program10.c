#include<stdio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;

    printf("\n Enter Values For Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Enter Values [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter Values For Matrix B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Enter Values [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n multiplication of matrix A and matrix B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
     printf("\n Matrix c\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }


}
