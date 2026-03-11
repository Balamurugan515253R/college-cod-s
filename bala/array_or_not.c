#include<stdio.h>
int main()
{
   int a[10],t,n,i,k;
   printf("enter the no of elements");
   scanf("%d",&n);
   printf("entre the elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("entre tha elements to be searched");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if(a[i]==k)
      {
	 t=1;
	 break;
      }
   }
   if(t==1)
      printf("element is present array");
   else
      printf("element is not present in array");
   return 0;
}
