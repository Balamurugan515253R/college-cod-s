#include<stdio.h>
 int main()
 {
   int a;
    printf("\t\tWelcome");
    printf("\n\tC PROGRAM TO FIND ODD OR EVEN");
    printf("\nEnter a number :");
    scanf("%d",&a);
    if(a%2==0)
{       
   printf("\n%d is an Even Number :",a);
}
else
{
   printf("\n%d is an Odd Number :",a);
}
   return 0;
}

