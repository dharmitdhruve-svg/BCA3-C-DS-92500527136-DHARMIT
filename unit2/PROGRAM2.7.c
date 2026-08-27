//Finding smallest common divisor of a given number
#include<stdio.h>

#define MAX 100

int stack[MAX], top =-1;

void push(int value);
int pop();

void main()
{
    int num1,i,div;

    printf("Enter a number 1:");
    scanf("%d",&num1);

     for(i=2;i<=num1;i++)
     {
         if(num1%i==0)
         {
             push(i);
         }
     }
     for(i=2;i<num1;i++)
     {
         if(num1%i==0)
            div=pop(i);
     }
     printf("\n Smallest common divisor is : %d",div);
}


 void push(int value)
 {
     if(top==MAX-1)
     {
         printf("\n Stack Overflow...");
     }
     else
     {
         top++;
         stack[top]=value;
     }
 }
 int pop()
 {
     char val;
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



