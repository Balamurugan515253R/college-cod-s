#include<stdio.h>
void main()
{
   FILE*fptr;
   char name[20];
   int age;
   float salary;
   fptr=fopen("emp.rec","w");
   if(fptr==NULL)
   {
      printf("file does nat exists\n");
      return;
   }
   printf("entre the name \n");
   scanf("%s",name);
   fprintf(fptr,"name=%s\n",name);
   printf("entre the age\n");
   scanf("%d",&age);
   fprintf(fptr,"age=%d\n",age);
   printf("entre the salary\n");
   scanf("%f",&salary);
   fprintf(fptr,"salary=%.2f\n",salary);
   fclose(fptr);
}	 
