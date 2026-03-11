#include<stdio.h>
#include<string.h>
int main()
{
   int l,choice;
   char a[50],b[50];
   printf("entre the string");
   scanf("%s",a);
   printf("entre the choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
      l=strlen(a);
      printf("length of the string is %d",l);
      break;
      case 2:
	 strcpy(b,a);
      printf("original string is %s",a);
      printf("copied string is %s",b);
      break;
      case 3:
      printf("entre the string 2");
      scanf("%s",b);
      strcat(a,b);
	 printf("concatinated string is %s",a);
      break;
      case 4:
      printf("entre string 2");
      scanf("%s",b);
      if(strcmp(a,b)==0)
	 printf("string are equal");
      else
	 printf("string are not equal");
      break;
      default:
      printf("entre valid choice");
     break;
   }
   return 0;
}



