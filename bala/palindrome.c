#include<stdio.h>
int main()
{
   int n,r,rev=0,original;
   printf("enter the number");
   scanf("%d",&n);
   original=n;
   while(n>0)
   {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
   }
      if(original==rev)
	 printf("the given number is palindrome");
      else
	 printf("the given number is not palindrome");
 
return 0;
}		
