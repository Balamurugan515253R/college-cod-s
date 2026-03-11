#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter the no.of elements");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%d",fibonacci(i));
   }
   printf("\n");
}
int fibonacci(int n)
{
   if(n<=0)
      return n;
   else
      return fibonacci(n-1)+fibonacci(n-2);
}
