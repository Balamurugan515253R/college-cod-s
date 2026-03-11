#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
   printf("entre the size of matrix a:");
   scanf("%d%d",&r1,&c1);
   printf("\tenter the size of b matrix:");
   scanf("%d%d",&r2,&c2);
   printf("\tenter a matrix elements:");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
	 scanf("%d",&a[i][j]);
      }
   }
   printf("\nentre b matrix elements:");
   for(i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
      {
	 scanf("%d",&b[i][j]);
      }
   }
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
	 c[i][j]=0;
	 for(k=0;k<r1;k++)
	 {
	    c[i][j]=c[i][j]+a[i][k]*b[k][j];
	 }
      }
   }
   printf("\nthe product is\n");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
	 printf("%d\t",c[i][j]);
      }
      printf("\n");
   }
   return 0;
}



