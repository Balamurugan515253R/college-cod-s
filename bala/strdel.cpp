#include<iostream>
#include<string>
using namespace std;
class str
{
   char*arr;
   public:
   str(char*temp)
   {
      arr=new char(strlen(temp));
      strcpy(arr,temp);
   }
   str operator-(char ip)
   {
      int i;
      for(i=0;arr[i]!="\0";i++)
      {
	 if(arr[i]=ip)
	       {
	       arr[i]=" ";
	       return str(arr)
	       }
      }
   }
   void display()
   {
      cout<<arr<<endl;
   }
   ~star
   {
      delet[]arr;
   }
};
int main()
{
   str s1("balamurugan");
   s1.display();
   str s2=s1-n;
   s2.display();
   return 0;
}

   


