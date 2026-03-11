#include<iostream>
using namespace std;
class A
{
   int x;
   public:
   A(int i)
   {
     x=i;
   }
   friend class B;
};
class B
{
   int y;
   public:
   B(int j)
   {
      y=j;
   }
   void maxavg()
   {
      A obj1(10);
      int avg=(obj1.x + y)/2;
      cout<<"The average of two nos is "<<avg<<"\n";
      if(obj1.x > y)
      {
         cout<<"The maximum no is "<<obj1.x;
      }
      else
      {
         cout<<"The maximum no is "<<y;
      }
   }
};
int main()
{
   B obj2(40);
   obj2.maxavg();
   return 0;
}
