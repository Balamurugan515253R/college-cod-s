#include<stdio.h>
int main()
{
   int a=0,b=1,c,i,n;
   printf("enter the number of elements");
   scanf("%d",&n);
   printf("%d%d",a,b);
   for(i=2;i<n;i++)
   {
      c=a+b;
   printf("%d\t",c);
      a=b;
      b=c;
   }
   return 0;
   }
