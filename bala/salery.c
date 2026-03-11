#include<stdio.h>
union employee
{
   char name[20];
   int empno;
   int bp;
};
int main()
{
   int i,n;
   float ts;
   union employee c[60];
   printf("entre no of employees");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\n enter the name\t");
      scanf("%s",c[i].name);
      printf("\nentre the no\t");
      scanf("%d",&c[i].empno);
      printf("\nentre the pay\t");
      scanf("%d",&c[i].bp);
   }
   printf("employee detials are\n");
   for(i=0;i<n;i++)
   {
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\ntotal\t%0.3f",ts);
   }
}

