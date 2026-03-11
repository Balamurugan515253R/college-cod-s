#include<iostream>
using namespace std;
class a
{
   protected:
      int a,b,c;
   public:
      a()
      {
	 c=a+b;
      }

      virtual void geta()
      {
	 cout<<"enter a:";
	 cin>>a;
	 cout<<"enter b:";
	 cin>>b;
      }
      virtual void display()
      {
	 cout<<"the addition of two no:"<<c<<endl;
      }
};
class b
{
   protected:
      int a,b,c;
   public:
      b()
      {
	 c=a-b;
      }
      void geta()
      {
	 cout<<"enter a:";
	 cin>>a;
	 cout<<"enter b:";
	 cin>>b;
      }
      void display()
      {
	 cout<<"the subtraction of two no is:"<<c<<endl;
      }
};
class c
{
   protected:
      int a,b,c;
   public:
      c()
      {
	 c=a/b;
      }
      void geta()
      {
	 cout<<"enter a:";
	 cin>>a;
	 cout<<"enter b:";
	 cin>>b;
      }
      void display()
      {
	 cout<<"the division of two no is:"<<c<<endl;
      }
};
class d
{
   protected:
      int a,b,c;
   public:
      d()
      {
	 c=a*b;
      }
      void geta()
      {
	 cout<<"enter a:";
	 cin>>a;
	 cout<<"enter b:";
	 cin>>b;
      }
      void display()
      {
	 cout<<"the multplication of two no is:"<<c<<endl;
      }
};
class e
{
   protected:
      int a,b,c;
   public:
      e()
      {
	 c=(a+b)/2;
      }
      void geta()
      {







