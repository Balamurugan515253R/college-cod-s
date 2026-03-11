#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter three numbers");
   scanf("%d%d%d", &a,&b,&c);
   if((a>b)&&(a>c))
      printf("%d is the biggest",a);
   else
   {
      if(b>c)
	 printf("%d is the biggest",b);
      else  
	 printf("%d is the biggest",c);
   }
   return 0;
}
