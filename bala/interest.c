#include<stdio.h>
#include<math.h>
void simple(int a,int b,int c)
{
   int d;
   d=(a*b*c)/100;
   printf("The simple interest value is....%d",d);
}
float compoundinterest(float p, float r, float t)
{
   float s=(1+r/100);
  float ci=p*pow(s,t)-p;
  printf("The compound value is....%f",ci);
   return ci;
}
int main()
{
   int p,q,r,p1,r1,t1;
   printf("Enter a value....");
   scanf("%d%d%d",&p,&q,&r);
   printf("Enter a value....");
   scanf("%d%d%d",&p1,&r1,&t1);
   simple(p,q,r);
   compoundinterest(p1,r1,t1);
   return 0;
}
