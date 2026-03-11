#include<iostream>
using namespace std;
class countdigit
{
   int num,*digit,l;
   public:
   void getdata()
   {
      cout<<"enter the number:";
      cin>>num;
      l=0;
   }
   void count()
   {
      int newnumber=num;
      while(num!=0)
      {
	 num=num/10;
	 l++;
      }
      digit=new int[l];
      for(int i=0;i<l;i++)
      {
	 digit[i]=newnumber%10;
	 newnumber=newnumber/10;
      }
   }
   void display()
   {
      for(int i=l-1;i>=0;i--)
      {
	 cout<<digit[i]<<endl;
      }
   }
};
int main()
{
   countdigit d1,d2;
   d1.getdata();
   d1.count();
   d1.display();
   d2.getdata();
   d2.count();
   d2.display();
}


