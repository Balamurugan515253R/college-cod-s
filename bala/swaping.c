#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("entre two numbers a,b");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("after swapping a=%d and b=%d",a,b);
   return 0;
}

