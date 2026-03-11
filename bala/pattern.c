#include<stdio.h>
int main()
{
   int n,i,j;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
      {
	 printf(" ");
      }
      for(j=n-i+1;j<=n;j++)
      {
	 printf("%d",j);
      }
      printf("0");
      for(j=n;j>=n-i+1;j--)
      {
	 printf("%d",j);
      }
      printf("\n");
   }
   return 0;
}


