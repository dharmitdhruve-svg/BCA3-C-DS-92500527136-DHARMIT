/*FACTORIAL OF A NUMBER*/
#include<stdio.h>
int factorial(int n);
void main()
{
    int n,z;
    printf("\n Enter Value :");
    scanf("%d",&n);
    z=factorial(n);
    printf("\n Factorial is : %d",z);
}

int factorial(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*factorial(n-1);
    return f;
}
