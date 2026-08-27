/* ENTER A STRING AND CONVERT IT INTO REVERSE ORDER */
#include<stdio.h>
#define MAX 30

 int stack[MAX],top=-1;
 void push(char ch);
 char pop();

 void main()
 {

     int i=0;
     char str[30];

     printf("\n Enter String :");
     gets(str);

     while(str[i]!='\0')
     {
         push(str[i]);
         i++;
     }
     while(top!=-1)
     {
         printf("\n%c",pop());
     }
 }
 void push(char value)
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
 char pop()
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
