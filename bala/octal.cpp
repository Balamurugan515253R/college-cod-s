#include<iostream>
using namespace std;
class octal
{
   int a[100],Ans,i,len;
   public:
   octal operator=(int n)
  {Ans=0;
    for(i=0;n>0;i++)
    {
       a[i]=n%8;
       n=n/8;
    }
    len=i;
    for(int j=len-1;j>=0;j--)
    {
       Ans=(Ans*10)+a[j];
    }
   }
    void display()
    {
      cout<<Ans;
      cout<<"\n";
    }
  };
   int main()
{
   int n1,n2;
   octal o1,o2,o3;
   cout<<"enter first decimal no:";
   cin>>n1;
   cout<<"enter second decimal no:";
   cin>>n2;
   o1=n1;
   o2=n2;
   o3=n1+n2;
   o1.display();
   o2.display();
   o3.display();
   return 0;

}
