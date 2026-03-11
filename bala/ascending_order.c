#include<stdio.h>
int main()
{
   int i,j,n,a[10],temp;
   printf("entre the no of elements to be stored");
   scanf("%d",&n);
   printf("entre the elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if(a[i]>a[j])
       {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
       }
    }
   }
   printf("the stored no are");
   for(i=0;i<n;i++)
   {
      printf("\t%d",a[i]);
   }
}

