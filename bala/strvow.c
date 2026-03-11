#include<stdio.h>
#include<string.h>
int main()
{
   char s[10],r[10];
   printf("enter the word");
   scanf("%s",&s);
   strcpy(r,s);
   printf("the word is    %s \n",r);
   int i;
   int x=strlen(r);
   for(i=0;i<=x;i++)
   {
   if(r[i]=='a'||r[i]=='e'||r[i]=='i'||r[i]=='o'||r[i]=='u')
   {
      printf("%c",r[i]);
   }
   }
}




