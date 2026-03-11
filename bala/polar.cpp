#include<iostream>
#include<math.h>
 using namespace std;
 class rect;
 class polar
   {
      int m,a;
      public:
         void get()
         {
            cout<<"enter magnitude and angle";
            cin>>m>>a;
         }
          operator rect();
    void display()
         {
            cout<<m<<"<"<<a<<endl;
         }
   };
 class rect
  {
     int rl,img;
     public:
     rect()
     {
      rl=0;
      img=0;
     }
        rect(int x,int y)
        {
         rl=x;
         img=y;
        }
         void display()
           {
            cout<<rl<<"+i"<<img<<endl;
           }
  };
polar::operator rect()
{
   int aa=m* cos(a*M_PI/180.0);
   int bb=m* sin(a*M_PI/180.0);
   return rect(aa,bb);
}
 int main()
    {
       polar p;
       p.get();
       rect r;
       r=p;
       p.display();
       r.display();
       return 0;
    }
