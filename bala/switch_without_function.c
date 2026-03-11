#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i=0,j=0,l=0,flag=0,choice;
   printf("entre the string");
   scanf("%s",a);
   printf("entre the choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 printf("length of the string %d",l);
	 break;
      case 2:
	 printf("the copied string is");
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i<l;i++)
	 {
	    b[i]=a[i];
	 }
	 printf("original string is %s",a);
	 printf("copied string is %s",b);
	 break;
      case 3:
	 for(i=0;i<l;i++)
	 {
	    b[i]=a[l-i-1];
	 }
	 printf("the reversed string is %s",b);
	 break;
      case 4:
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i<l;i++)
	 {
	    if(a[j]!=a[l-i-1])
	    {
	       flag=1;
	    }
	 }
	 if(flag==0)
	    printf("palindrome");
	 else
	    printf("not palindrome");
	 break;
defalt:
	 print("invalid choice");
	 break;
   }
   return 0;
}


