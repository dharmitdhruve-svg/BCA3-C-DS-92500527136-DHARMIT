/* factorial of a number using stack */
#include<stdio.h>
int stack[MAX],(top=-1);
void push(int ch);
int pop();

void main()
{
    int i=0,n,fact=1;
    printf("\n Enter Value :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n Factorial is : %d",fact);
}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n Stack Overflow...");
    }
    else
    {
        printf("\n Stack is Underflow...");
        top++;
        stack[top]=value;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n Stack is Underflow...");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
