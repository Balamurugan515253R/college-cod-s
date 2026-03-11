#include<stdio.h>
int main()
{
   int x,y,*a,*b,temp;
   printf("enter the value of x and y \n");
   scanf("%d%d",&x,&y);
   printf("before swapping x=%d and y=%d",x,y);
   a=&x;
   b=&y;
   temp=*b;
   *b=*a;
   *a=temp;
   printf("after swapping x=%d and y=%d",x,y);
   return 0;
}
