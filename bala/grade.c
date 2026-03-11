#include<stdio.h>
int main()
{
   int x,a,b,c,d,e;
   printf("\n\tC PROGRAM TO FIND GRADE FOR AVERAGE IS MARKS OBTAINED FROM 5 SUBJECTS");
   printf("\n\nEnter your marks of each subject separated by spaces :");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   x = (a+b+c+d+e)/5;
   if(x>=91&&x<=100)
   {
      printf("\n\tYour Grade is A \t***EXCELLENT***\n");
   }
   else if(x>=81&&x<=90)
   {
      printf("\nYour Grade is B \t***GOOD***\n");
   }
   else if(x>=71&&x<=80)
   {
      printf("\nYour Grade is C \t***NEED IMPROVEMENT***\n");
   }
   else if(x>=55&&x<=70)
   {
      printf("\nYour Grade is D \t***POOR***\n");
   }
   else if (x<55&&x>=0)
   {
      printf("\n****FAIL****\n");
   }
   else
   {
      printf("\nEnter a valid mark ***\n");
   }
   return 0;
}

