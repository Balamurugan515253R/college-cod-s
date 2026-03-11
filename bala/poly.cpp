#include<iostream>
using namespace std;
class a
{
   protected:
      int a;
   public:
      virtual void get()
      {
         cout<<"enter a:";
         cin>>a;
      }
      virtual void display()
      {
         cout<<a<<endl;
      }
};
class b:public a
{
 protected:
    int b;
 public:
    void get()
    {
      cout<<"enter b:";
      cin>>b;
    }
    void display()
    {
      cout<<b<<endl;
    }
};
class c:public b
{
   protected:
      int c;
   public:
      void get()
      {
         cout<<"enter c:";
         cin>>c;
      }
      void display()
      {
         cout<<c<<endl;
      }
};
class d:public c
{
   protected:
      int d;
   public:
      void get()
      {
         cout<<"enter d:";
         cin>>d;
      }
      void display()
      {
         cout<<d<<endl;
      }
};
class e:public d
{
   protected:
      int e;
   public:
      void get()
      {
         cout<<"enter e:";
         cin>>e;
      }
      void display()
      {
         cout<<e<<endl;
      }
};
int main()
{
   a*p;
   a x1;
   p=&x1;
   p->get();
   p->display();
   b obj1;
   p=&obj1;
   p->get();
   p->display();
   c obj2;
   p=&obj2;
   p->get();
   p->display();
   d obj3;
   p=&obj3;
   p->get();
   p->display();
   e obj4;
   p=&obj4;
   p->get();
   p->display();
   return 0;
}
