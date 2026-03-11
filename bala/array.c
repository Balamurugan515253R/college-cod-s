#include<stdio.h>
int main()
{
   int a[15];
   int i,b=0;
   for(i=0;i<=15;i++)
   {
      a[i]=b;
      b=b+1;
   }
   char *q=a;
   for(i=0;i<10;i++)
   {
      *q+=1;
   }
   printf("the result is......%d",*q);
   return 0;
}


