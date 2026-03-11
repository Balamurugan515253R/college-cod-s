#include<stdio.h>
#include<stdbool.h>
void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}
bool next_permulation(int *arr,int n)
{
   int i=n-2;
   while(i>0&&arr[i]>=[i+1])i--;
   if(i<0)
      return false;:wq



