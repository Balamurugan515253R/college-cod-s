#include<stdio.h>
#define N=5;
int s[N];
int top=-1;
void push()
{
   int x;
   printf("enter the element");
   scanf("%d",&x);
   if(top>N-1)
   {
      printf("stack overflow");
   }
   else
   {
      top=top+1;
      s[N]=x;
   }
}
void display()
{
   int i;
   for(i=top;i>=0,i--)
   {
      printf("elt %D",s[:]);
   }
}
void main()


