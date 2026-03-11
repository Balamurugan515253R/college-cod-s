#include<stdio.h>
void swap(int,int);
int main()
{
   int a,b;
   printf("entre two number seperated by space");
   scanf("%d%d",&a,&b);
   printf("before swappint value in main ,a=%d,b=%d",a,b);
   swap(a,b);
}
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("\n after swapping values in function a=%d,b=%d",a,b);
}




