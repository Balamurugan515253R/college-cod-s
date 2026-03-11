#include<stdio.h>
int main()
{
   int f,n;
   printf("enter the number");
   scanf("%d",&n);
   f=factorial(n); 
   printf("factorial of %d is %d",n,f);
}
int factorial(int n)
{
   int c;
   if(n==0)
      return 1;
   else
      c=n*factorial(n-1);
   return c;
}
   
