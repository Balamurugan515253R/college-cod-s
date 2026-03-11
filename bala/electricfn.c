#include<stdio.h>
int bill(int a , float b)
{
   if(a<=100)
      b=0;
   else if(a<=200)
      b=(a-100)*3;
   else if(a<=300)
      b=(100*3)+(a-200)*5;
   else if(a<=400)
      b=(100*3)+(100*5)+(a-300)*8;
   else
      b=(100*3)+(100*5)+(100*8)+(a-400)*10;
   printf("Total bill for electricity is..%2f ",b);
   return 0;
}
int main()
{
   int x;
   float y=0;
   printf("Enter the number of electricity units consumed.....");
   scanf("%d",&x);
   bill(x,y);
   return 0;
}
